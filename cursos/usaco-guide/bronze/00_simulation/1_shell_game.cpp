#include <algorithm>
#include <array>
#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

vector<int> shells{0, 1, 2};
array<int, 3> counter;

int main() {
  fill_n(counter.begin(), counter.size(), 0);
  int N;
  cin >> N;

  shells[0] = true;
  shells[1] = true;
  shells[2] = true;

  int a, b, g;
  for (int _ = 0; _ < N; ++_) {
    cin >> a >> b >> g;
    --a, --b, --g;

    swap(shells[a], shells[b]);

    ++counter[shells[g]];
  }

  cout << max({counter[0], counter[1], counter[2]}) << endl;
}
