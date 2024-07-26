#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != 'e') {
    if (c == '\t')
      printf("\\t");
    else if (c == '\n')
      printf("\\n");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\");
    else
      putchar(c);
  }

  return 0;
}
