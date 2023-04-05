/* Display the n terms of odd natural numbers and their sum */

#include "stdio.h"

int main ()
{
    int n;
    printf("input numbers of terms: ");
    scanf("%d", &n);
    int i;
    int sum = 0;
    int count = 0;

    printf("the odd numbers are: ");

    for (i = 1; count < n; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\nthe sum of odd natural upto %d terms: %d", n, sum);
    return 0;
}