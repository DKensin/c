#include <stdio.h>

#define MAX_LINE    100

int main()
{
    char ch;
    char s[MAX_LINE];
    char sen[MAX_LINE];

    scanf ("%c%*c", &ch);
    scanf ("%s%*c", s);
    scanf ("%[^\n]%*c", sen); /* scanset */

    printf ("%c\n", ch);
    printf ("%s\n", s);
    printf ("%s\n", sen);

    return 0;
}