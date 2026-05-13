#ifndef TCP_H
#define TCP_H
#include <stdint.h>
void tcp_init(void);
int tcp_connect(uint32_t ip, uint16_t port);
int tcp_send(int sock, uint8_t *data, int len);
int tcp_recv(int sock, uint8_t *buf, int maxlen);
#endif