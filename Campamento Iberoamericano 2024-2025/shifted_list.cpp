#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define spa << ' ' <<
using namespace std;

vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 1};

void solve() {
    int l = 0, r = vec.size() - 1;

    while (l < r) {
        int mid = (l + r) / 2;

        vec[mid] < vec[mid + 1] ? l = mid + 1 : r = mid;
    }

    cout << l << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;

    cout << '\n';

    while (t--) {
        solve();
    }
}
