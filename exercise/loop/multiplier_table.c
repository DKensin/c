/*Display the multiplier table vertically from 1 to n */

#include "stdio.h"

int main ()
{
    int n, m, k;
    printf("input upto the table number starting from 1: ");
    scanf("%d", &n);
    int i;
    int j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n ; j++)
        {
            m = j*i;
            printf("%d x %d = %d; ", j, i, m);
        }
    }

    return 0;
}

/*
n = 1; j = 1; i = 1; => 1x1 = 1] 
       j = 2; i = 1; => 2x1 = 2]
       j = 8; i = 1; => 8x1 = 8]
n = 2; 

*/