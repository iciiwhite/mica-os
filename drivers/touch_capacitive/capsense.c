#include "capsense.h"
#include "adc.h"
void capsense_init(void) { adc_init(); }
int capsense_read_slider(void) { return adc_read(0) >> 4; }