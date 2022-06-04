#include <stdio.h>
#include <stdlib.h>

#define MIN_RANGE   1
#define MAX_RANGE   1000

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int *arr;
    int index;
    int sum = 0;

    scanf("%d", &n);

    if ((MIN_RANGE <= n) && (MAX_RANGE >= n))
    {
        // dynamic allocate memory
        arr = (int *)malloc(n * sizeof(int));

        for (index = 0; index < n; index++)
        {
            scanf ("%d", &arr[index]);
            if ((MIN_RANGE <= arr[index]) && (MAX_RANGE >= arr[index]))
            {
                sum += arr[index];
            }
        }
        free(arr);
        printf ("%d\n", sum);
    }

    return 0;
}