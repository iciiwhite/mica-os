#include "vfs.h"
vfs_node_t root;
void vfs_init(void) {}
int vfs_mount(const char *path, int (*read)(int,void*,int)) { (void)path; (void)read; return 0; }