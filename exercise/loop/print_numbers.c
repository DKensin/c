#include "stdio.h"

int main ()
{
    int n = 10;
    int i;
    
    printf("enter n: ");

    printf("The first %d natural numbers are: \n", n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}