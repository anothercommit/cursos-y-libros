// Write a program detab that replaces
// tabs in the input with the proper number
// of blanks to space to the next tab stop.
// Assume a fixed set of tab stops, say every n columns.
// Should n be a variable or a symbolic parameter?

#include <stddef.h>
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

void my_getline(char[]);
void replace_spaces(const char[], char[]);
char line[MAXLINE], result[MAXLINE];

int main() {
    my_getline(line);
    replace_spaces(line, result);

    printf("%s", result);

    return 0;
}

void my_getline(char string[]) {
    int c, i;
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        string[i] = c;
    if (c == '\n') {
        string[i] = c;
        ++i;
    }
    string[i] = '\0';
}

void replace_spaces(const char original[], char result[]) {
    int i, lastLetter;

    for (i = 0; original[i] != '\0'; ++i)
        if (original[i] != ' ' && original[i] != '\t')
            lastLetter = i;

    for (int c = 0; c <= lastLetter; ++c)
        result[c] = original[c];

    if (lastLetter < i)
        result[lastLetter + 1] = '\n';

    result[lastLetter + 2] = '\0';
}
