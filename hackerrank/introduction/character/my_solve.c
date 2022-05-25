#include <stdio.h>

#define MAX_LINE    100

int main()
{
    char ch;
    char s[MAX_LINE];
    char sen[MAX_LINE];

    scanf ("%c", &ch);
    scanf ("\n");
    scanf ("%[^\n]%*c", s);
    scanf ("\n");
    scanf ("%[^\n]%*c", sen);

    printf ("%c\n", ch);
    printf ("%s\n", s);
    printf ("%s\n", sen);

    return 0;
}