#include "i2c.h"
void i2c_init(void) {}
int i2c_write(uint8_t addr, uint8_t reg, uint8_t data) { (void)addr; (void)reg; (void)data; return 0; }
int i2c_read(uint8_t addr, uint8_t reg, uint8_t *data) { (void)addr; (void)reg; (void)data; return 0; }