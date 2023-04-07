/* Display the n terms of odd natural numbers and their sum */

#include <stdio.h>

int main(void)
{
    int n, i;
    int sum = 0;
    int count ;

    printf("input numbers: ");
    scanf("%d", &n);
    printf("the odd numbers: ");

    for (count = 1; count < n; count+=2)
    {
        printf("%d ", count);
        sum += count;
    }
    printf("\nsum of odd upto %d: %d", n, sum);

    return 0;
}
