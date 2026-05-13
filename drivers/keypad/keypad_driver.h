#ifndef KEYPAD_DRIVER_H
#define KEYPAD_DRIVER_H
#include <stdint.h>
void keypad_init(void);
uint16_t keypad_scan(void);
uint16_t keypad_get_key(void);
#endif