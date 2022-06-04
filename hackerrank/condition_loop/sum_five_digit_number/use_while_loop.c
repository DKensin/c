#include <stdio.h>

#define MIN_NUM_HAS_FIVE_DIGIT  10000
#define MAX_NUM_HAS_FIVE_DIGIT  99999

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    int index;

    if ((MIN_NUM_HAS_FIVE_DIGIT <= n) && (MAX_NUM_HAS_FIVE_DIGIT >= n))
    {
        while (n>0) {
            sum += (n%10);
            n = n/10;
        }
        printf ("%d\n", sum);
    }

    return 0;
}