#ifndef INSERT_TREE
#define INSERT_TREE

struct Node;
struct Node *create_node(int val);
struct Node *insert_left(struct Node *head, int val);

#endif