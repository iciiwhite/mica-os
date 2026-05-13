#include "sms_proto.h"
int sms_encode(const char *text, uint8_t *pdu, int maxlen) { (void)text; (void)pdu; (void)maxlen; return 0; }
int sms_decode(const uint8_t *pdu, int len, char *text, int maxtext) { (void)pdu; (void)len; (void)text; (void)maxtext; return 0; }