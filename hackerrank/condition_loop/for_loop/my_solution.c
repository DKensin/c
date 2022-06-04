#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MIN_RANGE       1
#define MAX_RANGE       1000000
#define NUM_DEC_DIGIT   9

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *words[NUM_DEC_DIGIT] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *type_number[2] = {"even", "odd"};
    bool is_num_valid = true;
    int index = 0;

    is_num_valid &= (MIN_RANGE <= a) && (MAX_RANGE >= a);
    is_num_valid &= (MIN_RANGE <= b) && (MAX_RANGE >= b);
    is_num_valid &= (a <= b);

    if (is_num_valid)
    {
        for (index = a; index <= b; index++)
        {
            if (index <= 9)
            {
                printf ("%s\n", words[index - 1]);
            }
            else
            {
                printf ("%s\n", type_number[index % 2]);
            }
        }
    }

    return 0;
}

