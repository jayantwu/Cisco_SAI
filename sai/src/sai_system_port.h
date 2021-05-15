// BEGIN_LEGAL
//
// Copyright (c) 2020-current, Cisco Systems, Inc. ("Cisco"). All Rights Reserved.
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

#ifndef __SAI_SYSTEM_PORT_H__
#define __SAI_SYSTEM_PORT_H__

#include "sai_device.h"

namespace silicon_one
{
namespace sai
{

// Centralized control for VOQ switch operations.
class voq_cfg_manager
{
    CEREAL_SUPPORT_PRIVATE_MEMBERS
private:
    sai_switch_type_t m_switch_type = SAI_SWITCH_TYPE_NPU;
    uint32_t m_switch_voq_id = 0;
    // TODO: SAI_SWITCH_ATTR_MAX_SYSTEM_CORES is not used in the
    // current usage model for the system port API, and will need to
    // be updated as the model is better understood/revised.
    uint32_t m_max_system_cores = 0;
    std::unordered_map<uint32_t, sai_system_port_config_t> m_lane_to_config;
    shared_ptr<lsai_device> m_sdev;

    sai_status_t validate_mandatory_voq_attr(std::unordered_map<sai_attr_id_t, sai_attribute_value_t>& attribs,
                                             sai_switch_attr_t attr,
                                             sai_attribute_value_t& attr_value,
                                             bool& has_attr);

public:
    voq_cfg_manager() = default; // Cereal needs default constructor for warm boot
    voq_cfg_manager(shared_ptr<lsai_device> sdev);
    sai_status_t initialize(const sai_attribute_t* attr_list, uint32_t attr_count);
    sai_status_t verify_system_port_config(const sai_system_port_config_t& sp_cfg, sai_api_t api_log) const;
    bool is_npu_switch() const;
    bool is_voq_switch() const;
    la_status get_sp_cfg_from_lane(uint32_t starting_lane, sai_system_port_config_t& sp_config) const;
    sai_status_t get_switch_voq_id(uint32_t& switch_voq_id) const;
    sai_switch_type_t get_switch_type() const;
    sai_status_t get_max_system_cores(uint32_t& max_system_cores) const;
#if CURRENT_SAI_VERSION_CODE > SAI_VERSION_CODE(1, 5, 2)
    sai_status_t get_system_port_config_list(sai_attribute_value_t* value);
#endif
    la_status create_front_panel_system_ports(transaction& txn);
};

sai_status_t teardown_system_port_for_port_entry(shared_ptr<lsai_device> sdev, port_entry* pentry);

} // namespace sai
} // namespace silicon_one
#endif
