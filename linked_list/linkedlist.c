#include <stdio.h>
#include <stdlib.h>
#include "insert.h"
#include "linkedlist.h"

int func1()
{
    printf("Function 1 run\n");
    return 1;
}

void func2()
{
    printf("Func 2 yeahh");
}

int main()
{
    struct Node *head;

    int (*func1_p)() = &func1;
    void (*func2_p)() = &func2;

    b_insert(&head, func1_p);
    b_insert(&head, func2_p);

    void (*func_ret_p)();
    func_ret_p = get_ptr(&head, 1);
    func_ret_p();

    // int ch, data, pos;
    // struct Node *head;

    // printf("Linked List\n");

    // while (1)
    // {
    //     printf("1: Insert at beginning\n");
    //     printf("2: insert at Nth position\n");
    //     printf("3: insert at end\n");
    //     printf("4: display\n");
    //     printf("0: exit\n");
    //     printf("Enter your choice:\n");
    //     scanf("%d", &ch);

    //     switch (ch)
    //     {
    //     case 1:
    //         printf("Enter data: ");
    //         scanf("%d", &data);
    //         b_insert(&head, data);
    //         break;
    //     case 2:
    //         printf("Enter data: ");
    //         scanf("%d", &data);
    //         printf("Enter position: ");
    //         scanf("%d", &pos);
    //         n_insert(&head, data, pos);
    //         break;
    //     case 3:
    //         printf("Enter data: ");
    //         scanf("%d", &data);
    //         e_insert(&head, data);
    //         break;
    //     case 4:
    //         print_list(&head);
    //         break;
    //     case 0:
    //         return 0;

    //     default:
    //         printf("Wrong Choice\n");
    //     }
    // }

    return 0;
}