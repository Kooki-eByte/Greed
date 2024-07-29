#define _CRT_SECURE_NO_WARNING
#include "../include/greed.h"
#include <stdio.h>
#include <time.h>

const char *DEFAULT_COLOR = "\x1b[0m";

char *type[LOG_LVL_LEN] = {"DEBUG", "SUCCESS", "WARNING", "ERROR"};
char *colors[LOG_LVL_LEN] = {
    "\x1b[34m", /* blue */
    "\x1b[32m", /* green */
    "\x1b[33m", /* yellow */
    "\x1b[31m"  /* red */
};
time_t current_time;
struct tm *m_time;

/* --- Uncomment to test code internally ---
 --------------------------------------------
int main(int argc, char *argv[]) {
  g_log_debug("Test of the debug macro!");
  g_log_success("Test of the success macro!");
  g_log_warning("Test of the warning macro!");
  g_log_error("Test of the error macro!");
}
*/

void get_time() {
  time(&current_time);
  m_time = localtime(&current_time);
}

void g_logger(LOG_LEVEL lvl, const char *msg, char *file, uint line) {
  get_time();
  printf("%s", colors[lvl]);
  printf("[%s]", type[lvl]);
  printf("[%d/%d/%d -> %d:%d:%d]--", m_time->tm_mday, m_time->tm_mon,
         m_time->tm_year + 1900, m_time->tm_hour, m_time->tm_min,
         m_time->tm_sec);
  printf("[%s on line %u in file %s]\n%s", msg, line, file, DEFAULT_COLOR);
}
