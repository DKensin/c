/* Display the multiplication table for a given interger */

#include "stdio.h"

int main ()
{
    int n, m;
    printf("input the number: ");
    scanf("%d", &n);
    int i;

    for (i = 1; i <= 10; i++)
    {
        m = n*i;
        printf("%d x %d = %d\n", n, i, m);
    }
    return 0;
}