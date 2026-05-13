#include "sdcard.h"
#include "spi.h"
int sdcard_init(void) { return 0; }
int sdcard_read_block(uint32_t lba, uint8_t *buf) { (void)lba; (void)buf; return 0; }
int sdcard_write_block(uint32_t lba, const uint8_t *buf) { (void)lba; (void)buf; return 0; }