#ifndef RTC_H
#define RTC_H
#include <stdint.h>
void rtc_init(void);
uint32_t rtc_get_timestamp(void);
void rtc_set_timestamp(uint32_t ts);
#endif