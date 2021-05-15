// BEGIN_LEGAL
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

#include "api/system/la_log.h"
#include "common/logger.h"
#include "sai_device.h"
#include "sai_logger.h"

namespace silicon_one
{
namespace sai
{

sai_service_method_table_t g_sai_service_method{};

la_logger_level_e
sai_log_level_to_leaba(sai_log_level_t log_level)
{
    switch (log_level) {
    case SAI_LOG_LEVEL_DEBUG:
        return la_logger_level_e::DEBUG;
    case SAI_LOG_LEVEL_INFO:
        return la_logger_level_e::INFO;
    case SAI_LOG_LEVEL_NOTICE:
        return la_logger_level_e::NOTICE;
    case SAI_LOG_LEVEL_WARN:
        return la_logger_level_e::WARNING;
    case SAI_LOG_LEVEL_ERROR:
        return la_logger_level_e::ERROR;
    case SAI_LOG_LEVEL_CRITICAL:
        return la_logger_level_e::CRIT;
    default:
        return la_logger_level_e::WARNING;
    }
}
}
}

using namespace silicon_one;
using namespace silicon_one::sai;

//
// sai_log_set
// when sai_api_id == SAI_API_UNSPECIFICED
// turn on la_logging(API + HLD) according to log_level
//
// when sai_api_id == SAI_API_MAX
// turn on la_logging and sai_logging according to log_level
//
// other sai_api_id, turn on specificed SAI API according to the log level
//
sai_status_t
sai_log_set(sai_api_t sai_api_id, sai_log_level_t log_level)
{
    lsai_logger::instance().set_logging_level(sai_api_id, log_level);

    return SAI_STATUS_SUCCESS;
}

sai_object_type_t
sai_object_type_query(sai_object_id_t sai_object_id)
{
    uint32_t type;

    type = sai_object_id >> LA_SAI_TYPE_OFFSET;
    if (type >= (uint32_t)SAI_OBJECT_TYPE_MAX) {
        return SAI_OBJECT_TYPE_NULL;
    }

    return (sai_object_type_t)type;
}

sai_object_id_t
sai_switch_id_query(sai_object_id_t sai_object_id)
{

    lsai_object la_obj{sai_object_id};

    if (la_obj.get_device() == nullptr) {
        SAI_LOG("Fail to get the sai object, can not query the switch 0x%lx", sai_object_id);
    }

    lsai_object la_sw(SAI_OBJECT_TYPE_SWITCH, la_obj.switch_id, la_obj.switch_id);
    return la_sw.object_id();
}
