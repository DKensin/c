#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MIN_RANGE       1
#define MAX_RANGE       1000000000
#define NUM_DEC_DIGIT   9

char* readline();

int main()
{
    char* n_endptr; // contain the part of string after strtol()
    char* n_str = readline();// read a line
    int n = strtol(n_str, &n_endptr, 10);
    // Array of string
    char *words[NUM_DEC_DIGIT] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    // Write Your Code Here
    if ((MIN_RANGE <= n) && (MAX_RANGE >= n))
    {
        if (n > NUM_DEC_DIGIT)
        {
            printf ("Greater than 9\n");
        }
        else
        {
            printf ("%s\n", words[n - 1]);
        }
    }

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
