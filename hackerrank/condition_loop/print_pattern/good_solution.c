/*
 * This can be solved very cleanly if you think of the grid as a cartesian plane where the 1 is point (0, 0).
 * Since there is symmetry, you can map each point into quadrant 1 and have a single relation to get the value. 
 */

#include <stdio.h>

#define max(a, b)   ((a > b) ? (a) : (b))
#define abs(n)      ((n > 0) ? (n) : (-n))

int main()
{
    int n;
    int i,j;
    scanf("%d", &n);

    for (i= -n + 1; i < n; i++)
    {
        for (j = -n + 1; j < n; j++)
        {
            printf("%d ", max(abs(i), abs(j)) + 1);
        }
        printf("\n");
    }

    return 0;
}