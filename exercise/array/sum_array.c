/* Write a program in C to find the sum of all elements of the array. */

#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int n, index;
    int sum = 0;
    int arr[MAX_SIZE];

    printf("enter n: ");
    scanf("%d", &n);

    for (index = 0; index < n; index++)
    {
        printf("element -%d: ", index);
        scanf("%d", &arr[index]);
        sum += arr[index];
    }
    printf("sum of all elements in array: %d", sum);

    return 0;
}