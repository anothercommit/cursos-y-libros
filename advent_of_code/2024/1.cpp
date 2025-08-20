#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define fi first
#define se second
#define spa << ' ' <<
#define ALL(x) x.begin(), x.end()
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ull distance = 0;
    vector<int> l1(1000);
    vector<int> l2(1000);

    for (int i = 0; i < 1000; ++i)
        cin >> l1[i] >> l2[i];

    sort(ALL(l1));
    sort(ALL(l2));

    for (int i = 0; i < 1000; ++i)
        distance += abs(l1[i] - l2[i]);

    freopen("output.txt", "w", stdout);
    cout << distance;
}
