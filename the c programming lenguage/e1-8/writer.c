#include <stdio.h>

// Contador de tabs blanks y newlines

int main() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == '\b'){ 
      ++nl;
      printf("%d\n", nl);
    }
  }
}
