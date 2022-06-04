#include <stdio.h>
#include <stdbool.h>

#define MIN_VALUE   2
#define MAX_VALUE   1000

void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    int temp = 0;
    int a,b;

    for (a = 1; a < n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            // AND operator
            temp = a & b;
            if ((temp > max_and) && (temp < k))
            {
                max_and = temp;
            }

            // OR operator
            temp = a | b;
            if ((temp > max_or) && (temp < k))
            {
                max_or = temp;
            }

            // XOR operator
            temp = a ^ b;
            if ((temp > max_xor) && (temp < k))
            {
                max_xor = temp;
            }
        }
    }
    printf ("%d\n", max_and);
    printf ("%d\n", max_or);
    printf ("%d\n", max_xor);
}

int main() {
    int n, k;
    bool is_num_valid = true;

    scanf("%d %d", &n, &k);

    is_num_valid &= (MIN_VALUE <= n) && (MAX_VALUE >= n);
    is_num_valid &= (MIN_VALUE <= k) && (n >= k);

    if (is_num_valid)
    {
        calculate_the_maximum(n, k);
    }
 
    return 0;
}
