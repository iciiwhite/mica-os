#ifndef SMS_H
#define SMS_H
void sms_send(const char *number, const char *text);
char* sms_receive(void);
void sms_run(void);
#endif