#include "linkedlist.h"

#include <stdlib.h>
#include <stdio.h>

struct Node *create_node(void *addr)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->ptr = addr;
    new_node->next = NULL;

    return new_node;
}

// Beginning Insert
void b_insert(struct Node **head, void *addr)
{
    struct Node *new_node = create_node(addr);
    new_node->next = *head;
    *head = new_node;
}

// Insert at N
void n_insert(struct Node **head, void *addr, int pos)
{
    if (*head == NULL)
    {
        b_insert(head, addr);
        return;
    }
    struct Node *new_node = create_node(addr);
    struct Node *temp = *head; // the one before the new node
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

// End Insert
void e_insert(struct Node **head, void *addr)
{
    if (*head == NULL)
    {
        b_insert(head, addr);
        return;
    }
    struct Node *new_node = create_node(addr);
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void *get_ptr(struct Node **head, int pos)
{
    struct Node *temp = *head;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }
    return temp->ptr;
}

// void print_list(struct Node **head)
// {
//     struct Node *temp = *head;
//     printf("[");
//     while (temp != NULL)
//     {
//         printf("%p ", temp->ptr);
//         temp = temp->next;
//     }
//     printf("]\n");
// }