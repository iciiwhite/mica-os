#include <stdio.h>
#include <stdarg.h>
static void putc(void *p, char c) { (void)p; eink_draw_char(c, 0,0,0); }
int printf(const char *fmt, ...) { va_list ap; va_start(ap,fmt); int ret=0; (void)fmt; (void)ap; return ret; }
int sprintf(char *buf, const char *fmt, ...) { (void)buf; (void)fmt; return 0; }
int snprintf(char *buf, int n, const char *fmt, ...) { (void)buf; (void)n; (void)fmt; return 0; }