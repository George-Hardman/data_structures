#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *leftPtr, *rightPtr;
};

struct Node *newNode(int value);
struct Node *insert(struct Node *node, int value);
void inOrder(struct Node *root);

struct Node *newNode(int value)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->leftPtr = NULL;
    new_node->rightPtr = NULL;
    return new_node;
}

struct Node *insert(struct Node *node, int value)
{
    if (node == NULL)
    {
        return newNode(value);
    }
    if (value < node->data)
    {
        node->leftPtr = insert(node->leftPtr, value);
    }
    else if (value > node->data)
    {
        node->rightPtr = insert(node->rightPtr, value);
    }
    return node;
}

void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->leftPtr);
        printf("%d\n", root->data);
        inOrder(root->rightPtr);
    }
}

int main(int argc, char **argv)
{
    struct Node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 13);
    root = insert(root, 4);
    root = insert(root, 7);

    inOrder(root);

    return 0;
}

// void preOrder(TreeNodePtr treePtr);
// void postOrder(TreeNodePtr treePtr);