#include "stdio.h"


char queryData(char table_name, char column_name, int row);
int sum(int a, int b);
void print_hello(int number);

int main(void)
{
    int c = sum(5, 5);

    printf("c = %d\n", c);

    return 0;
}

void print_hello(int number)
{
    int index = 0;

    for (index = 0; index < number; index++)
    {
        printf("Hello World\n");
    }
}

int sum(int a, int b)
{
    int c = a+b;

    return c;
}