#include "tcp.h"
void tcp_init(void) {}
int tcp_connect(uint32_t ip, uint16_t port) { (void)ip; (void)port; return -1; }
int tcp_send(int sock, uint8_t *data, int len) { (void)sock; (void)data; (void)len; return -1; }
int tcp_recv(int sock, uint8_t *buf, int maxlen) { (void)sock; (void)buf; (void)maxlen; return -1; }