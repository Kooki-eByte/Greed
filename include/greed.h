/*
 * Greed is a basic logging library, utilizing useful logs for informing a
 * developer based on different levels of logging and colorizing them to ensure
 * readability. Being GREEDY with everything involved in the code.
 */

/* --- typedefs for shortening data types */
#if defined _WIN32
typedef unsigned int uint;
#else
#include <sys/types.h>
#endif
#if !defined(VERSE_TYPES)
typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef float f32;
typedef double f64;
typedef unsigned char boolean;
#endif

/* --- GREED LOGGER --- */
typedef enum { LOG_DBG, LOG_SCS, LOG_WRN, LOG_ERR, LOG_LVL_LEN } LOG_LEVEL;

void get_time();

extern void g_logger(LOG_LEVEL lvl, const char *msg, char *file, uint line);

#define g_log_debug(msg) g_logger(LOG_DBG, msg, __FILE__, __LINE__);
#define g_log_success(msg) g_logger(LOG_SCS, msg, __FILE__, __LINE__);
#define g_log_warning(msg) g_logger(LOG_WRN, msg, __FILE__, __LINE__);
#define g_log_error(msg) g_logger(LOG_ERR, msg, __FILE__, __LINE__);
