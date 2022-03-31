#ifndef _PICO_STDIO_RTT_H
#define _PICO_STDIO_RTT_H

#include "pico/stdio.h"

/** \brief Support for stdin/stdout using SEGGER RTT
 *  \defgroup pico_stdio_rtt pico_stdio_rtt
 *  \ingroup pico_stdio
 */

#ifdef __cplusplus
extern "C" {
#endif

extern stdio_driver_t stdio_rtt;

/*! \brief Explicitly initialize stdin/stdout over RTT and add it to the current set of stdin/stdout drivers
 *  \ingroup pico_stdio_rtt
 */
void stdio_rtt_init(void);

#ifdef __cplusplus
}
#endif

#endif
