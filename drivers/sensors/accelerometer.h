#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H
#include <stdint.h>
void accel_init(void);
void accel_read(int16_t *x, int16_t *y, int16_t *z);
#endif