#include <bits/stdc++.h>
#include <set>
#define fore(i, a, b) for (ll i = a; i < b; ++i)
#define SZ(a) ((int)a.size())
#define ALL(a) (a.begin(), a.end())
#define spa << ' ' <<
#define fi first
#define se second
#define endl '\n'

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vv;
typedef pair<ll,ll> pp;

void solve() {
    int n; cin >> n;
    set<int> unicos;
    int num;
    fore(i, 0, n) unicos.insert((cin >> num, num));
    cout << n - unicos.size() + 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin >> t;

    cout << '\n';
	
    while (t--) {
        solve();
    }

	return 0;
}
