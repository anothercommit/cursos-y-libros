#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <linux/limits.h>
#define fore(i, a, b) for (ll i = a; i < b; ++i)
#define rep(i, b) for (ll i = o; i < b; ++i)
#define sz(a) ((int)a.size())
#define all(x) (x).begin(), (x).end()
#define spa << ' ' <<
#define fi first
#define se second
#define endl '\n'

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef vector<ll> vv;
typedef vector<db> vd;
typedef pair<ll,ll> pp;

void solve() {
    ll N, Q;
    cin >> N >> Q;

    vv sums(N);
    cin >> sums[0];
    fore(i, 1, N) {
        cin >> sums[i];
        sums[i] += sums[i-1];
    }

    fore(i, 0, Q){

    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin >> t;

    cout << '\n';

    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}

