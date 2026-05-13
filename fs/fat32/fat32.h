#ifndef FAT32_H
#define FAT32_H
#include <stdint.h>
int fat32_mount(void);
int fat32_open(const char *path);
int fat32_read(int fd, uint8_t *buf, int len);
int fat32_write(int fd, const uint8_t *buf, int len);
void fat32_close(int fd);
#endif