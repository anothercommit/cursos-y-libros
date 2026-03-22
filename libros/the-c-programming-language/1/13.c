#include <stdio.h>

#define IN 0
#define OUT 1

int main() {
  int c, word_count, word_lenght;
  word_count = word_lenght = 0;
  int state = OUT;
  int lenghts[100];

  while ((c = getchar()) != EOF) {
    if (state == OUT && c != ' ')
      state = IN;

    else if (state == IN && (c == ' ' || c == '\n')) {
      state = OUT;
      lenghts[word_count] = word_lenght;
      word_lenght = 0;
      ++word_count;
    }

    if (state == IN)
      ++word_lenght;
  }

  for (int i = 0; lenghts[i] != 0; ++i) {
    printf("%d ", lenghts[i]);

    for (int j = 0; j < lenghts[i]; ++j)
      printf("-");
    printf("\n");
  }

  return 0;
}
