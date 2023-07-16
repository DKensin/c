/* Write a program in C to read n number of values in an array and display them in reverse order. */

#include <stdio.h>

#define MAX_SIZE  100

int main(void)
{
    int n;
    int arr[MAX_SIZE] = {0};
    int index = 0;

    printf("enter n: ");
    scanf("%d", &n);

    printf("input %d number of elements in the array: \n", n);
    for ( index = 0; index < n; index++)
    {
        printf("element [%d]: ", index);
        scanf("%d", &arr[index]);
    }

    printf("the values store into the array are: ");
    for ( index = 0; index < n; index++)
    {
        printf("%d ", arr[index]);
    }

    printf("\nthe values store into the array in reverse are: ");
    for ( index = n-1; index >= 0; index--)
    {
        printf("%d ", arr[index]);
    }

   return 0;

}