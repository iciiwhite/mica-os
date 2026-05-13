#ifndef DNS_H
#define DNS_H
#include <stdint.h>
int dns_lookup(const char *name, uint32_t *ip);
#endif