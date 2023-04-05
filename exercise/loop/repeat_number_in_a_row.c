/* Write a pattern like a right angle triangle with a number which will repeat a number in a row */

#include "stdio.h"

int main ()
{
    int n;
    printf("The pattern like: ");
    scanf("%d", &n);
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        } 
        printf("\n");
    }
    
    return 0;
}

/*
n = 3; i = 1; j = 1; 1<=1 => i = 1;
              j = 2; 2<=1 => out
       i = 2; j = 1; 1<=2 => i = 2;
              j = 2; 2<=2 => i = 2;
              j = 3; 3<=2 => out
       i = 3; 3<= 2 out

*/
       