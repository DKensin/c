/* Compute the sum of the first 10 natural numbers */

#include "stdio.h"

int main ()
{
    int n = 10;
    int i;
    int sum = 0;

    printf("the sum of the first %d natural numbers are: \n", n);
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}