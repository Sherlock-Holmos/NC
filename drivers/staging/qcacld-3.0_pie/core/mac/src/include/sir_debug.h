/*
 * Copyright (c) 2011-2012, 2014-2015, 2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * Author:      Sandesh Goel
 * Date:        02/25/02
 */

#ifndef __POL_DEBUG_H__
#define __POL_DEBUG_H__

#define LOGOFF  0
#define LOGP    1
#define LOGE    2
#define LOGW    3
#define LOG1    4
#define LOG2    5
#define LOG3    6
#define LOG4    7
#define LOGD    8

#define MAC_ADDR_ARRAY(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MAC_ADDRESS_STR "%02x:%02x:%02x:%02x:%02x:%02x"

#define pe_log_rate_limited(rate, level, args...)
#define pe_log_rate_limited_fl(rate, level, format, args...)
#define pe_alert_rate_limited(rate, format, args...)
#define pe_err_rate_limited(rate, format, args...)
#define pe_warn_rate_limited(rate, format, args...)
#define pe_notice_rate_limited(rate, format, args...)
#define pe_info_rate_limited(rate, format, args...)
#define pe_debug_rate_limited(rate, format, args...)
#define pe_log(level, args...)
#define pe_logfl(level, format, args...)
#define pe_alert(format, args...)
#define pe_err(format, args...)
#define pe_warn(format, args...)
#define pe_info(format, args...)
#define pe_debug(format, args...)
#define PE_ENTER()
#define PE_EXIT()


#endif