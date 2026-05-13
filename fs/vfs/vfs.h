#ifndef VFS_H
#define VFS_H
typedef struct vfs_node { char name[32]; struct vfs_node *next; } vfs_node_t;
void vfs_init(void);
int vfs_mount(const char *path, int (*read)(int,void*,int));
#endif