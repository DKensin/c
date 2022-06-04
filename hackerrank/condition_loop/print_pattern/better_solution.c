/* the idea is number want print = min the distance of 4 sides
        4 4 4 4 4 4 4  
        4 3 3 3 3 3 4   
        4 3 2 2 2 3 4   
        4 3 2 1 2 3 4   
        4 3 2 2 2 3 4   
        4 3 3 3 3 3 4   
        4 4 4 4 4 4 4

 * example: row 2, column 2, number want print = 3 = 4 - 1 = 4 - (min of 4 distances)
 */

#include <stdio.h>

int main()
{
    int n;
    int len;
    int i,j;
    int min;
    scanf("%d", &n);

    len = 2 * n - 1;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            // distance of 4 sides: i, j, len-1-i, len-1-j
            min = (i < j) ? (i) : (j);
            min = (min < (len - i - 1)) ? (min) : (len - i - 1); 
            min = (min < (len - j - 1)) ? (min) : (len - j - 1);
            printf ("%d ", n - min);
        }
        printf ("\n");
    }

    return 0;
}