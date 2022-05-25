#include <stdio.h>
#include <stdbool.h>

#define MIN_VALUE   1
#define MAX_VALUE   10000

int main()
{
	int first_int_num, second_int_num;
    float first_float_num, second_float_num;
    bool is_in_range = true;
    
    scanf ("%d%d", &first_int_num, &second_int_num);
    scanf ("%f%f", &first_float_num, &second_float_num);
    
    is_in_range &= (first_int_num <= MAX_VALUE) && (second_int_num <= MAX_VALUE);
    is_in_range &= (first_int_num >= MIN_VALUE) && (second_int_num >= MIN_VALUE);
    is_in_range &= (first_float_num <= MAX_VALUE) && (second_float_num <= MAX_VALUE);
    is_in_range &= (first_float_num >= MIN_VALUE) && (second_float_num >= MIN_VALUE);
    
    if (is_in_range)
    {
        printf ("%d %d\n", first_int_num + second_int_num, first_int_num - second_int_num);
        printf ("%.1f %.1f\n", first_float_num + second_float_num, first_float_num - second_float_num);
    }
    return 0;
}