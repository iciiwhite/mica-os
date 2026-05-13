#include "light_sensor.h"
#include "adc.h"
void light_init(void) {}
int light_read_lux(void) { return adc_read(1) * 10; }