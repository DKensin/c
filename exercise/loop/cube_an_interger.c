/*Display the cube of the number up to an interger */

#include "stdio.h"

int main ()
{
    int n;
    printf("input number of terms: ");
    scanf("%d", &n);
    int i;
    int value;

    for (i = 1; i <= n; i++)
    {
        printf("number is: %d and cube of the %d is: ", i, i);
        value = i * i * i;
        printf("%d ", value);
    }

    return 0;
}