#include <stdio.h>

int main() {
  int nt, ns, nl, c;
  nt = ns = nl = 0;

  while ((c = getchar()) != 'e')
    if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
    else if (c == ' ')
      ++ns;

  printf("tabs: %d newlines: %d spaces: %d", nt, nl, ns);

  return 0;
}
