#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
  int c, inside_blank;
  inside_blank = OUT;

  while ((c = getchar()) != 'e') {
    if (c == ' ') {
      if (inside_blank == OUT) {
        putchar(c);
        inside_blank = IN;
      }
    } else {
      putchar(c);
      inside_blank = OUT;
    }
  }

  return 0;
}
