#ifndef L2CAP_H
#define L2CAP_H
#include <stdint.h>
void l2cap_init(void);
int l2cap_send(uint16_t cid, uint8_t *data, int len);
#endif