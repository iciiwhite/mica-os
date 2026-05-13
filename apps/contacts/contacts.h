#ifndef CONTACTS_H
#define CONTACTS_H
void contacts_add(const char *name, const char *number);
char* contacts_find(const char *name);
void contacts_run(void);
#endif