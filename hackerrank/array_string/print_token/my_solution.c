#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    int index;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for (index = 0; index < strlen(s); index++)
    {
        printf ("%c", s[index]);
        if (' ' == s[index])
        {
            printf ("\n");
        }
    }
    /*
    for (char *c = s; *c != NULL; c++) {
        if (*c == ' ') {
            *c = '\n';
        }
    }
    printf("%s", s); 
    */
    free(s);

    return 0;
}