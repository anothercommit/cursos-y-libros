#include <stddef.h>
#include <stdio.h>
#define MAXLINE 20 /* maximum input line length */

void get_line_without_blanks(char string[MAXLINE]);
void printline(char string[MAXLINE]);

int main() {
  char line[MAXLINE];

  get_line_without_blanks(line);
  print_line(line);

  return 0;
}

void get_line_without_blanks(char string[MAXLINE]) {
  int c, i, lastLetter, lastBlank;

  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < MAXLINE - 2; ++i) {
    if (c != ' ' && c != '\t')
      lastLetter = i;

    string[i] = c;
  }

  if (lastLetter < i)

    if (c == '\n') {
      string[i] = c;
      ++i;
      string[i] = '\0';
    }
}
