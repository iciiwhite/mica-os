#ifndef UDP_H
#define UDP_H
#include <stdint.h>
void udp_init(void);
int udp_send(uint32_t dst, uint16_t port, uint8_t *data, int len);
int udp_recv(uint32_t *src, uint16_t *port, uint8_t *buf, int maxlen);
#endif