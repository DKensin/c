/* Write sum, sub, multiple, divide calculation */

#include "stdio.h"

int multiple (int a, int b)
{
    int c = a * b;

    return c;
}

int main (void)
{
    int c = multiple(30, 40);

    printf("Multiple is: %d\n", c);

    return 0;
}