// BEGIN_LEGAL
//
// Copyright (c) 2017-current, Cisco Systems, Inc. ("Cisco"). All Rights Reserved.
//
// This file and all technical concepts, proprietary knowledge, algorithms and
// intellectual property rights it contains (collectively the "Confidential Information"),
// are the sole propriety information of Cisco and shall remain at Cisco's ownership.
// You shall not disclose the Confidential Information to any third party and you
// shall use it solely in connection with operating and/or maintaining of Cisco's
// products and pursuant to the terms and conditions of the license agreement you
// entered into with Cisco.
//
// THE SOURCE CODE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED.
// IN NO EVENT SHALL CISCO BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
// AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
// THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// END_LEGAL

#include "la_mpls_vpn_decap_impl.h"
#include "api/npu/la_vrf.h"
#include "hld_utils.h"
#include "npu/counter_utils.h"
#include "npu/la_counter_set_impl.h"
#include "system/la_device_impl.h"

#include "api_tracer.h"
#include "common/defines.h"
#include "common/logger.h"
#include "la_strings.h"

#include <sstream>

namespace silicon_one
{

la_mpls_vpn_decap_impl::la_mpls_vpn_decap_impl(const la_device_impl_wptr& device) : m_device(device), m_vrf(nullptr)
{
}

la_mpls_vpn_decap_impl::~la_mpls_vpn_decap_impl()
{
}

la_object::object_type_e
la_mpls_vpn_decap_impl::type() const
{
    return la_object::object_type_e::MPLS_VPN_DECAP;
}

std::string
la_mpls_vpn_decap_impl::to_string() const
{
    std::stringstream log_message;
    log_message << "la_mpls_vpn_decap_impl(oid=" << m_oid << ")";
    return log_message.str();
}

la_object_id_t
la_mpls_vpn_decap_impl::oid() const
{
    return m_oid;
}

const la_device*
la_mpls_vpn_decap_impl::get_device() const
{
    return m_device.get();
}

la_mpls_label
la_mpls_vpn_decap_impl::get_label() const
{
    return m_label;
}

const la_vrf*
la_mpls_vpn_decap_impl::get_vrf() const
{
    return m_vrf.get();
}

la_status
la_mpls_vpn_decap_impl::add_to_mpls_termination_table(const la_counter_set_wcptr& counter)
{
    for (la_slice_pair_id_t slice_pair : get_slice_pairs(m_device, la_slice_mode_e::NETWORK)) {
        const auto& table(m_device->m_tables.mpls_termination_em1_table[slice_pair]);
        npl_mpls_termination_em1_table_value_t value;
        npl_mpls_termination_em1_table_key_t key;

        key.termination_label = m_label.label;

        npl_mpls_termination_result_t& result(value.payloads.mpls_termination_result.result);
        result.service = NPL_MPLS_SERVICE_L3_VPN;

        if (m_vrf != nullptr) {
            la_vrf_gid_t vrf_gid = m_vrf->get_gid();
            result.pwe_vpn_mldp_info.l3vpn_info.l3_relay_id.id = vrf_gid;
            result.pwe_vpn_mldp_info.l3vpn_info.vpn_p_counter
                = populate_counter_ptr_slice_pair(counter, slice_pair, COUNTER_DIRECTION_INGRESS);
            result.pwe_vpn_mldp_info.l3vpn_info.vpn_mldp_info.vpn_info.allow_ipv4_ipv6_fwd_bits.override_enable_ipv4_uc = 1;
            result.pwe_vpn_mldp_info.l3vpn_info.vpn_mldp_info.vpn_info.allow_ipv4_ipv6_fwd_bits.override_enable_ipv6_uc = 1;
        }

        la_status status = table->set(key, value, m_slice_pair_data[slice_pair].m_mpls_termination_entry);
        return_on_error(status);
    }

    return LA_STATUS_SUCCESS;
}

la_status
la_mpls_vpn_decap_impl::remove_from_mpls_termination_table()
{
    for (la_slice_pair_id_t slice_pair : get_slice_pairs(m_device, la_slice_mode_e::NETWORK)) {
        const auto& table(m_device->m_tables.mpls_termination_em1_table[slice_pair]);
        npl_mpls_termination_em1_table_key_t key = m_slice_pair_data[slice_pair].m_mpls_termination_entry->key();

        la_status status = table->erase(key);
        return_on_error(status);

        m_slice_pair_data[slice_pair].m_mpls_termination_entry = nullptr;
    }

    return LA_STATUS_SUCCESS;
}

la_status
la_mpls_vpn_decap_impl::initialize(la_object_id_t oid, la_mpls_label label, const la_vrf_wcptr& vrf)
{
    m_oid = oid;

    if (vrf != nullptr) {
        if (!of_same_device(vrf, this)) {
            return LA_STATUS_EDIFFERENT_DEVS;
        }
    }

    m_label = label;
    m_vrf = vrf;
    m_counter = nullptr;

    la_status status = add_to_mpls_termination_table(m_counter);
    return_on_error(status);

    if (vrf != nullptr) {
        m_device->add_object_dependency(vrf, this);
    }

    return LA_STATUS_SUCCESS;
}

la_status
la_mpls_vpn_decap_impl::destroy()
{
    if (m_device->is_in_use(this)) {
        return LA_STATUS_EBUSY;
    }

    la_status status = remove_from_mpls_termination_table();
    return_on_error(status);

    status = remove_counter();
    return_on_error(status);

    if (m_vrf != nullptr) {
        m_device->remove_object_dependency(m_vrf, this);
    }

    return LA_STATUS_SUCCESS;
}

la_status
la_mpls_vpn_decap_impl::set_counter(la_counter_set* counter)
{
    start_api_call("counter=", counter);
    la_status status;

    const la_counter_set_impl_wptr& counter_sp = m_device->get_sptr<la_counter_set_impl>(counter);

    if (counter_sp == nullptr) {
        // Remove the previous counter
        status = remove_counter();
        return_on_error(status);
        return LA_STATUS_SUCCESS;
    }

    if (m_vrf == nullptr) {
        // Counter not supported on POP-And-FWD
        return LA_STATUS_EINVAL;
    }

    if (!of_same_device(counter_sp, this)) {
        return LA_STATUS_EDIFFERENT_DEVS;
    }

    size_t counter_set_size = counter_sp->get_set_size();
    if (counter_set_size != 2) {
        return LA_STATUS_EINVAL;
    }

    const auto& prev_counter = m_counter;
    if (counter_sp == prev_counter) {
        return LA_STATUS_SUCCESS;
    }

    status = counter_sp->add_mpls_decap_counter();
    return_on_error(status);

    m_device->add_object_dependency(counter_sp, this);

    status = add_to_mpls_termination_table(counter_sp);
    return_on_error(status);

    // Remove the previous counter
    status = remove_counter();
    return_on_error(status);

    m_counter = counter_sp;

    return LA_STATUS_SUCCESS;
}

la_status
la_mpls_vpn_decap_impl::remove_counter()
{
    const auto& counter_impl = m_counter;

    if (counter_impl == nullptr) {
        return LA_STATUS_SUCCESS;
    }

    m_device->remove_object_dependency(counter_impl, this);

    la_status status = counter_impl->remove_mpls_decap_counter();
    return_on_error(status);

    m_counter = nullptr;

    return LA_STATUS_SUCCESS;
}

la_status
la_mpls_vpn_decap_impl::get_counter(la_counter_set*& out_counter) const
{
    start_api_getter_call();

    out_counter = m_counter.get();

    return LA_STATUS_SUCCESS;
}

} // namespace silicon_one
