// This solution is the first solution I found by myself.
/* My ideal: look into the number in the center of each line
 * This is the minimum number, print from n, decreased, when = minimum number of each line,
 * print with a number of this minimum number, after that, print increated until reach n (that means end of line)
 */

#include <stdio.h>

int main()
{
    int n = 9;
    scanf("%d", &n);
    int i,j;
    int num_centre;
    int current_val;

    for (i = 0; i < n; i++) // print for each line
    {
        current_val = n;
        num_centre = n - i;
        for (j = 0; j < i; j++)
        {
            printf("%d ", current_val);
            current_val--;
        }
        for (j = i; j < 2*n-1-i; j++)
        {
            printf ("%d ", num_centre);
        }
        for (j = 2*n-1-i; j < 2*n-1; j++)
        {
            current_val++;
            printf ("%d ", current_val);
        }
        printf("\n");
    }

    for (i = n; i > 1; i--)
    {
        current_val = n;
        num_centre =  n - i + 2;
        for (j = 0; j < i - 2; j++)
        {
            printf("%d ", current_val);
            current_val--;
        }
        for (j = i - 2; j < 2*n-i+1; j++)
        {
            printf ("%d ", num_centre);
        }
        for (j = 2*n-i+1; j < 2*n-1; j++)
        {
            current_val++;
            printf ("%d ", current_val);
        }
        printf("\n");
    }

    return 0;
}