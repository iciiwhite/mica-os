#include "udp.h"
void udp_init(void) {}
int udp_send(uint32_t dst, uint16_t port, uint8_t *data, int len) { (void)dst; (void)port; (void)data; (void)len; return -1; }
int udp_recv(uint32_t *src, uint16_t *port, uint8_t *buf, int maxlen) { (void)src; (void)port; (void)buf; (void)maxlen; return -1; }