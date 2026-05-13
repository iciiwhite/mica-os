#include <string.h>
void *memcpy(void *d, const void *s, int n) { char *dest=d; const char *src=s; for(int i=0;i<n;i++) dest[i]=src[i]; return d; }
void *memset(void *d, int c, int n) { char *dest=d; for(int i=0;i<n;i++) dest[i]=c; return d; }