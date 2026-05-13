#ifndef BLUETOOTH_H
#define BLUETOOTH_H
void bluetooth_init(void);
int bluetooth_pair(const char *addr);
int bluetooth_send_file(const char *path);
#endif