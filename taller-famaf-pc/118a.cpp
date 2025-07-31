#include <bits/stdc++.h>
#define fore(i, a, b) for (ll i = a, i < b; ++i)
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
    string word; cin >> word;

    for (char c : word){
        if (c!= 'Y' && c != 'y' && c != 'A' && c != 'a' && c != 'E' && c != 'e' && c != 'i' && c != 'I' && c != 'O' && c != 'o' && c != 'u' && c != 'U'){
            cout << '.' << (char)(c <= 'Z' ? c + 32 : c);
        }
    }
    cout << '\n';
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
