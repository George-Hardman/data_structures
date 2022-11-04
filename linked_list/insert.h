#ifndef INSERT_H
#define INSERT_H

struct Node;
struct Node *create_node(void *addr);
void b_insert(struct Node **head, void *addr);
void n_insert(struct Node **head, void *addr, int pos);
void e_insert(struct Node **head, void *addr);
void *get_ptr(struct Node **head, int pos);

#endif