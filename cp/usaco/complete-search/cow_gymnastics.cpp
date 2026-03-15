#include <bits/stdc++.h>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define spa << ' ' <<
using namespace std;

void solve() {
    int n, k;
    cin >> k >> n;
    vector<int> cows(n);
    vector<int> pairs(n, true);

    rep(i, 0, k) { rep(j, 0, n) cin >> cows[j]; }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}
