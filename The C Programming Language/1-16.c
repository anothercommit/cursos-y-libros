#include <stdio.h>
#define MAXLINE 4 /* maximum input line length */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = my_getline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0)
    printf("%d: %s\n", len, longest);

  return 0;
}

int my_getline(char s[], int lim) {
  int c, i;
  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < lim - 2; ++i)
    if (i < lim - 1)
      s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
