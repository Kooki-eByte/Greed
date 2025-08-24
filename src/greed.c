#include "../include/greed.h"

void test_warn_and_error_logs() {
  g_log_warning("This is a warning greed test");
  g_log_error("This is a error greed test");
}

void test_success_log() {
  g_log_success("This is a success greed test");
}

int main(void) {
  g_log_debug("Debug test");
  test_success_log();
  test_warn_and_error_logs();
  return 0;
}