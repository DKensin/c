/* Write a program in C to count the total number of duplicate elements and indicate that numbers in an array */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int size; /* size of array */
    int i, j;
    int arr[MAX_SIZE];
    int count = 0;

    printf("enter n: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) /* enter elements */
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("origin array: "); /* print elements */
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("number was duplicate: ");
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                printf("%d ", arr[j]);

            }
        }
    }
    printf("\ntotal duplicate: %d ", count);


    return 0;
}


