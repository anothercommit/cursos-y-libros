#include <stdio.h>
#define MAXLINE 1000

void my_getline(char[]);
void reverse_string(char[], int);

int main() {
  char line1[MAXLINE];
  my_getline(line1);

  char line2[MAXLINE];
  my_getline(line2);

  printf("%s", line1);
  printf("%s", line2);
  return 0;
}

void my_getline(char s[]) {
  int c, i;
  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
}

void reverse_string(char string[], int lenght) {}
