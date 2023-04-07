/* Display the cube of the number up to an interger */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("input number: ");
    scanf("%d", &n);

    printf("output: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d^%d = %d\n", i, i, i*i*i);
    }

    return 0;
}
