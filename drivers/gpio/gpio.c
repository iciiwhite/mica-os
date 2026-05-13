#include "gpio.h"
void gpio_set_mode(int pin, int mode) { (void)pin; (void)mode; }
void gpio_write(int pin, int val) { (void)pin; (void)val; }
int gpio_read(int pin) { (void)pin; return 0; }