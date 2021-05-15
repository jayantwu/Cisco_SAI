// BEGIN_LEGAL
//
// Copyright (c) 2021-current, Cisco Systems, Inc. ("Cisco"). All Rights Reserved.
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

#ifndef __SAI_NETLINK_MSG__
#define __SAI_NETLINK_MSG__

#include <linux/netlink.h>
#include <netlink/types.h>
#include <netlink/genl/genl.h>
#include <netlink/genl/ctrl.h>
#include <netlink/genl/mngt.h>
#include <memory>
#include <vector>
#include <cassert>
#include "common/cereal_utils.h"

namespace silicon_one
{

namespace sai
{

class sai_netlink_msg_wrapper
{

public:
    static std::unique_ptr<sai_netlink_msg_wrapper> new_msg();
    ~sai_netlink_msg_wrapper();
    nl_msg* msg_ptr();

private:
    sai_netlink_msg_wrapper();
    struct nl_msg* m_msg = nullptr;
};

enum class nl_attr_type { U32, U16, DATA };

constexpr uint32_t PSAMPLE_CMD_SAMPLE = 0;
constexpr uint32_t PSAMPLE_VERSION = 1;

enum psample_attributes {
    /* sampled packet metadata */
    PSAMPLE_ATTR_IIFINDEX,
    PSAMPLE_ATTR_OIFINDEX,
    PSAMPLE_ATTR_ORIGSIZE,
    PSAMPLE_ATTR_SAMPLE_GROUP,
    PSAMPLE_ATTR_GROUP_SEQ,
    PSAMPLE_ATTR_SAMPLE_RATE,
    PSAMPLE_ATTR_DATA,
    PSAMPLE_ATTR_NUM,
    PSAMPLE_ATTR_MAX = PSAMPLE_ATTR_NUM
};

struct sai_netlink_msgAttribute {
    psample_attributes attr;
    nl_attr_type type;
    union {
        uint32_t u32;
        uint8_t* packet_data;
        uint16_t u16;
    };
    size_t size;
};

class sai_netlink_msg
{

public:
    sai_netlink_msg(uint32_t command) : m_command(command){};

    virtual ~sai_netlink_msg() = default;

    std::unique_ptr<sai_netlink_msg_wrapper> message(int family);
    virtual uint32_t version() const = 0;

protected:
    virtual void add_attributes() = 0;

    std::unique_ptr<sai_netlink_msg_wrapper> create_msg(int family);

    uint32_t m_command;

    std::vector<sai_netlink_msgAttribute> m_attributes;
};

class sai_psample : public sai_netlink_msg
{
public:
    sai_psample(uint16_t iif, uint16_t oif, uint32_t samplerate, uint32_t origsize, uint32_t groupseq, uint8_t* data, uint32_t size)
        : sai_netlink_msg(PSAMPLE_CMD_SAMPLE),
          m_iif(iif),
          m_oif(oif),
          m_samplerate(samplerate),
          m_origsize(origsize),
          m_groupseq(groupseq),
          m_data(data),
          m_size(size){};
    uint32_t version() const override
    {
        return PSAMPLE_VERSION;
    }

protected:
    void add_attributes() override;
    uint16_t m_iif;
    uint16_t m_oif;
    uint32_t m_samplerate;
    uint32_t m_origsize;
    uint32_t m_groupseq;
    uint8_t* m_data;
    uint32_t m_size;
};
}
}

#endif //__SAI_NETLINK_MSG__
