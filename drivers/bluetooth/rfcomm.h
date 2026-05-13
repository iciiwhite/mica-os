#ifndef RFCOMM_H
#define RFCOMM_H
void rfcomm_init(void);
int rfcomm_listen(int channel);
int rfcomm_connect(const char *addr, int channel);
#endif