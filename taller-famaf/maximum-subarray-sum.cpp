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
    ll N, num;
    cin >> N >> num;
    ll sum = num, max_sum = num;

    while ((cin >> num) && cin.get() != '\n'){
        sum = max(sum + num, num); 
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;
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
