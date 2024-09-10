#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int b_search(int n, vector<int> vec) {
  int k = 0;
  for (int b = vec.size() / 2; b >= 1; b /= 2)
    while (k + b < vec.size() && vec[k + b] <= vec.size())
      k += b;

  if (vec[k] == n)
    return k;

  return -1;
}

int main() {
  int size, n;
  cin >> size;
  cin >> n;

  vector<int> vec;
  int input;
  for (int i = 0; i < size; ++i) {
    cin >> input;
    vec.push_back(input);
  }

  sort(vec.begin(), vec.end());

  cout << b_search(n, vec);
}
