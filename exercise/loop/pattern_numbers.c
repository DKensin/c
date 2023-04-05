/* Display a pattern like a right angle triangle with a number */

#include "stdio.h"

int main ()
{
    int n;
    printf("The pattern like: ");
    scanf("%d", &n);
    int i, j;

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i+1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}

/* n = 3; i = 1; 1<=3; j = 1; 1<2 => j = 1; j++
                       j = 2; 2<2 => out; leap i: i = 1 => 1<=3; \n; i++ = 2
          i = 2; 2<=3; j = 1; 1<3 => j = 1; j++
                       j = 2; 2<3 => j = 2; j++
                       j = 3; 3<3 => out; leap i = 2 => 2<=3; \n; i++
          i = 3; 3<=3; j = 1; 1<4 => j = 1;
                       j = 2; 2<4 => j = 2;
                       j = 3; 3<4 => j = 3;
                       j = 4; 4<4 => out; leap i = 3 => 3<=3; \n; i++
          i = 4; 4<=3 => out;
        
*/