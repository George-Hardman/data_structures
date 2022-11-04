#include <stdio.h>
#include <stdlib.h>
#include "insert.h"

struct Node
{
    int val;
    struct Tree *left;
};

struct Node *create_node()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    return new_node;
}