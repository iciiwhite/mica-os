#ifndef DHCP_H
#define DHCP_H
#include <stdint.h>
void dhcp_init(void);
int dhcp_request(uint32_t *ip);
#endif