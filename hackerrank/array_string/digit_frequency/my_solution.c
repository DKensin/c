#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[10] = {0};  // element 0 contain frequent digit of 0, element 1 contain frequent digit of 1,...
    char *num;
    int index;
    num = (char *)malloc(1024 * sizeof(char));
    scanf("%[^\n]", num);
    num = realloc(num, strlen(num) + 1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (index = 0; index < strlen(num); index++)
    {
        if(('0' <= num[index]) && ('9' >= num[index]))
        {
            arr[num[index] - '0']++;
        }
    }

    for (index = 0; index < 10; index++)
    {
        printf ("%d ", arr[index]);
    }

    return 0;
}
