#ifndef IP_H
#define IP_H
#include <stdint.h>
uint16_t ip_checksum(uint16_t *data, int len);
int ip_send(uint32_t dst, uint8_t proto, uint8_t *data, int len);
#endif