#include <stdio.h>

void double_val(int *val)
{
    *val = 2 * (*val);
}

int main()
{
    int x = 5;
    int *p = &x;
    int *y = p;

    double_val(p);
    double_val(y);

    printf("%d", *y);
}