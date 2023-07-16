/* Write a program that accepts an array arr of n integers from the user and prints the largest and smallest element in the array. */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int n, index;
    int arr[MAX_SIZE];
    int max = 0;
    int min;

    printf("enter n: ");
    scanf("%d", &arr[MAX_SIZE]);

    for (index = 0; index < n; index++)
    {
        printf("element -%d: ", index);
        scanf("%d", &arr[index]);
    }

    printf("The largest element in the array: ");
    for (index = 0; index < n; index++)
    {
        if(arr[index] > max)
        {
            max = arr[index];
        }
    }
    printf("%d\n", max);

    printf("The smallest element in the array: ");
    for (index = 0; index < n; index++)
    {
        if(arr[index] < min)
        {
            min = arr[index];
        }
    }
    printf("%d", min);

    return 0;
}