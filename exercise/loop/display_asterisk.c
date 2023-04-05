/* Display (*) like a right angle triangle */

#include "stdio.h"

int main ()
{
    int n;
    printf("the pattern like: ");
    scanf("%d", &n);
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*", j);
        }
        printf("*\n", i);
    } 
    return 0;
}

/* 
n = 4; i = 1; j = 1; 1<1 => out; leap i: [i = 1; 1 <= 4 => printf i = *] ; i++     => *                                  
       i = 2; j = 1; 1<2 => printf j = *; j++
              j = 2; 2<2 => out; leap i: [i = 2; 2 <= 4 => printf i = *] ; i++ = 3 => **
       i = 3; j = 1; 1<2 => printf j = *;
              j = 2; 2<3 => printf j = *;                       
              j = 3; 3<3 => out; leap i: [i = 3; 3 <= 4 => printf i = *] ; i++ = 4 => ***
       i = 4; j = 1; 1<4 => printf j = 1;
              j = 2; 2<4 => printf j = 2;
              j = 3; 3<4 => printf j = 3; 
              j = 4; 4<4 => out; leap i: [i = 4; 4 <= 4 => printf i = 4] ; i++ = 5 => ****
                                         [i = 5; 5 <= 4 => out]
*/