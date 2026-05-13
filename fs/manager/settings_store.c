#include "settings_store.h"
#include "fat32.h"
#include <string.h>
int settings_save(const char *key, const char *value) {
    char path[64];
    snprintf(path, 64, "/settings/%s.txt", key);
    int fd = fat32_open(path);
    if(fd < 0) return -1;
    fat32_write(fd, (uint8_t*)value, strlen(value));
    fat32_close(fd);
    return 0;
}
int settings_load(const char *key, char *out, int maxlen) {
    char path[64];
    snprintf(path, 64, "/settings/%s.txt", key);
    int fd = fat32_open(path);
    if(fd < 0) return -1;
    int len = fat32_read(fd, (uint8_t*)out, maxlen-1);
    out[len] = 0;
    fat32_close(fd);
    return 0;
}