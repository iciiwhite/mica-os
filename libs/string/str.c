#include <string.h>
int strlen(const char *s) { int l=0; while(s[l]) l++; return l; }
char *strcpy(char *d, const char *s) { int i=0; while((d[i]=s[i])) i++; return d; }
int strcmp(const char *a, const char *b) { while(*a && *b && *a==*b) { a++; b++; } return *a-*b; }