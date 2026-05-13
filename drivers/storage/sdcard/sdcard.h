#ifndef SDCARD_H
#define SDCARD_H
#include <stdint.h>
int sdcard_init(void);
int sdcard_read_block(uint32_t lba, uint8_t *buf);
int sdcard_write_block(uint32_t lba, const uint8_t *buf);
#endif