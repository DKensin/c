/* Print each numbers get from user and display sum and average of each number */

#include <stdio.h>

int main(void)
{
    int n, i;
    int sum = 0;
    float aver;
    int number;

    printf("input numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("number - %d: ", i);
        scanf("%d", &number);
        sum += number;
        aver = sum/n;
    }
    printf("the sum is: %d\n", sum);
    printf("the average is: %.f\n", aver);

    return 0;
}
