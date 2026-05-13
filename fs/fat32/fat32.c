#include "fat32.h"
#include "sdcard.h"
int fat32_mount(void) { return 0; }
int fat32_open(const char *path) { (void)path; return 0; }
int fat32_read(int fd, uint8_t *buf, int len) { (void)fd; (void)buf; (void)len; return -1; }
int fat32_write(int fd, const uint8_t *buf, int len) { (void)fd; (void)buf; (void)len; return -1; }
void fat32_close(int fd) { (void)fd; }