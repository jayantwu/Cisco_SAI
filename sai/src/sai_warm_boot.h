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

//
// Copyright (c) 2018-current, Cisco Systems, Inc. ("Cisco"). All Rights Reserved.
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
#ifndef __SAI_WARM_BOOT_H__
#define __SAI_WARM_BOOT_H__

#ifdef ENABLE_SERIALIZATION
#include "common/cereal_utils.h"
#if CEREAL_MODE == CEREAL_MODE_BINARY
#include <cereal/archives/binary.hpp>
#elif CEREAL_MODE == CEREAL_MODE_JSON
#include <cereal/archives/json.hpp>
#elif CEREAL_MODE == CEREAL_MODE_XML
#include <cereal/archives/xml.hpp>
#endif
#endif // ENABLE_SERIALIZATION

#include "api/system/la_device.h"
#include "api/types/la_ethernet_types.h"
#include "common/cereal_utils.h"
#include "common/ranged_index_generator.h"

#include "sai_switch.h"

#ifdef ENABLE_SERIALIZATION
// todo ??? temporary stuff - remove when SDK auto serialize tool is ready
namespace cereal
{
template <class Archive>
void save(Archive& ar, const silicon_one::la_ipv4_addr_t& m);
template <class Archive>
void load(Archive& ar, silicon_one::la_ipv4_addr_t& m);
template <class Archive>
void save(Archive& ar, const silicon_one::la_ipv6_addr_t& m);
template <class Archive>
void load(Archive& ar, silicon_one::la_ipv6_addr_t& m);
template <class Archive>
void save(Archive& ar, const silicon_one::la_ipv4_prefix_t& m);
template <class Archive>
void load(Archive& ar, silicon_one::la_ipv4_prefix_t& m);
template <class Archive>
void save(Archive& ar, const silicon_one::la_ipv6_prefix_t& m);
template <class Archive>
void load(Archive& ar, silicon_one::la_ipv6_prefix_t& m);
template <class Archive>
void save(Archive& ar, const la_mac_addr_t& m);
template <class Archive>
void load(Archive& ar, la_mac_addr_t& m);
template <class Archive>
void save(Archive& ar, const silicon_one::la_ip_tos& m);
template <class Archive>
void load(Archive& ar, silicon_one::la_ip_tos& m);
template <class Archive>
void save(Archive& ar, const silicon_one::la_mpls_label& m);
template <class Archive>
void load(Archive& ar, silicon_one::la_mpls_label& m);
}

namespace cereal
{
template <class Archive>
void save(Archive& archive, const silicon_one::ranged_index_generator& m);
template <class Archive>
void load(Archive& archive, silicon_one::ranged_index_generator& m);
}
#endif // ENABLE_SERIALIZATION

namespace silicon_one
{
namespace sai
{

template <typename T>
class const_la_obj_wrap;

template <typename T>
class la_obj_wrap
{
    friend class const_la_obj_wrap<T>;

public:
    la_obj_wrap() = default;
    la_obj_wrap(T* obj)
    {
        m_la_obj = obj;
    }

    void operator=(const T& obj)
    {
        m_la_obj = obj;
    }

    operator T*() const
    {
        return m_la_obj;
    }
    operator T*&()
    {
        return m_la_obj;
    }
    T* operator->() const
    {
        return m_la_obj;
    }

    template <class Archive>
    void save(Archive& ar) const
    {
#ifdef ENABLE_SERIALIZATION
        if (m_la_obj != nullptr) {
            ar(::cereal::make_nvp("oid", ((la_object*)m_la_obj)->oid()));
        } else {
            ar(::cereal::make_nvp("oid", LA_OBJECT_ID_INVALID));
        }
#endif
    }

    template <class Archive>
    void load(Archive& ar)
    {
#ifdef ENABLE_SERIALIZATION
        sai_object_id_t oid;
        ar(::cereal::make_nvp("oid", oid));
        if (oid == LA_OBJECT_ID_INVALID) {
            m_la_obj = nullptr;
        } else {
            la_device* la_dev = get_la_device(0); // ??? Is it OK to assume sw_id 0 for now?
            m_la_obj = (T*)la_dev->get_object(oid);
        }
#endif
    }

private:
    T* m_la_obj = nullptr;
};

template <typename T>
class const_la_obj_wrap
{
public:
    const_la_obj_wrap() = default;
    const_la_obj_wrap(const T* obj)
    {
        m_la_obj = obj;
    }

    const_la_obj_wrap(const la_obj_wrap<T> obj)
    {
        m_la_obj = obj.m_la_obj;
    }

    void operator=(const T& obj)
    {
        m_la_obj = obj;
    }

    operator const T*() const
    {
        return m_la_obj;
    }
    operator const T*&()
    {
        return m_la_obj;
    }
    const T* operator->() const
    {
        return m_la_obj;
    }

    template <class Archive>
    void save(Archive& ar) const
    {
#ifdef ENABLE_SERIALIZATION
        if (m_la_obj != nullptr) {
            ar(::cereal::make_nvp("m_oid", ((la_object*)m_la_obj)->oid()));
        } else {
            ar(::cereal::make_nvp("m_oid", LA_OBJECT_ID_INVALID));
        }
#endif
    }

    template <class Archive>
    void load(Archive& ar)
    {
#ifdef ENABLE_SERIALIZATION
        sai_object_id_t oid;
        ar(oid);
        if (oid == LA_OBJECT_ID_INVALID) {
            m_la_obj = nullptr;
        } else {
            la_device* la_dev = get_la_device(0); // ??? Is it OK to assume sw_id 0 for now?
            m_la_obj = (T*)la_dev->get_object(oid);
        }
#endif
    }

private:
    const T* m_la_obj = nullptr;
};
}
}
#endif
