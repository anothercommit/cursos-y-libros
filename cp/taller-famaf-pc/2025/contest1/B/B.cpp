#include <bits/stdc++.h>
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
    int a,b,c; cin >> a >> b >> c;
    int dis_a = (a-1);
    int dis_b = abs(b - c) + c - 1;

    if (dis_a < dis_b) cout << 1 << endl;
    else if (dis_a > dis_b) cout << 2 << endl;
    else cout << 3 << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t = 1;
    cin >> t;

    // cout << '\n';

    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}
