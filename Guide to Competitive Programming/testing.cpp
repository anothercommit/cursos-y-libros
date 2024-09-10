#include <iostream>

using namespace std;

int main() {
  int i = 0, j = 10;
  i += -(j /= 2);
  cout << i;
}
