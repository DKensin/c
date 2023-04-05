/* Display sum and average of any number*/

#include "stdio.h"

int main ()
{
    int n;
    scanf("%d", &n);
    printf("input the %d numbers: \n", n);
    int sum = 0;
    float aver;
    int i;
    int value;

    for (i = 1; i <= 10; i++)
    {
        printf("number - %d: ", i);
        scanf("%d", &value);
        sum += value;
        aver = sum/n;
    }
    
    printf("the sum of %d number is: %d\n", n, sum);
    printf("the average is: %f\n", aver);

    return 0;
}