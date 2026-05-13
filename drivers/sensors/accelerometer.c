#include "accelerometer.h"
#include "i2c.h"
void accel_init(void) {}
void accel_read(int16_t *x, int16_t *y, int16_t *z) { *x=0; *y=0; *z=1000; }