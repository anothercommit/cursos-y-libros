#include <stdio.h>
#define OUT 0
#define IN 1

int main() {
  int c, state;
  state = OUT;

  while ((c = getchar()) != '-') {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      putchar('\n');
      putchar(c);
    } else
      putchar(c);
  }

  return 0;
}
