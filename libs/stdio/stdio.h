#ifndef STDIO_H
#define STDIO_H
#include <stdarg.h>
int printf(const char *fmt, ...);
int sprintf(char *buf, const char *fmt, ...);
int snprintf(char *buf, int n, const char *fmt, ...);
#endif