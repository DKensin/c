#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int temp;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (i = 0; i < num/2; i++)
    {
        temp = arr[num-1-i];
        arr[num-1-i] = arr[i];
        arr[i] = temp;
    }
    for(i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }
    // free allocated memory
    free(arr);

    return 0;
}