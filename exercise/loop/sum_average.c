/* Print each numbers get from user and display sum and average of each number */

#include <stdio.h>

int main(void)
{
    int n, i;
    float sum = 0;
    float aver;
    float number;

    printf("input numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("number - %d: ", i);
        scanf("%f", &number);
        sum += number;
    }
    printf("the sum is: %.f\n", sum);
    aver = sum/n;
    printf("the average is: %.1f\n", aver);

    return 0;
}
