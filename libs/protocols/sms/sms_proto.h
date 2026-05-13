#ifndef SMS_PROTO_H
#define SMS_PROTO_H
#include <stdint.h>
int sms_encode(const char *text, uint8_t *pdu, int maxlen);
int sms_decode(const uint8_t *pdu, int len, char *text, int maxtext);
#endif