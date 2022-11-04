#include <stdio.h>
#include <stdlib.h>
#include "insert.h"

struct treeNode
{
    int data;
    struct Node *leftPtr;
    struct Node *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;
