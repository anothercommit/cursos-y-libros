#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
int main() {
  int c, nl, nw, nc, state;
  nl = nw = nc = 0;
  state = OUT;

  while ((c = getchar()) != '-') {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("newlines: %d, words: %d, characters: %d\n", nl, nw, nc);

  return 0;
}
