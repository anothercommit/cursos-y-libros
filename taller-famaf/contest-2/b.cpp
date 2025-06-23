#include <bits/stdc++.h>
#include <cstring>
// #define fore(i, a, b) for (ll i = a; i < b; ++i)
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define rep(i, b) for (ll i = 0; i < b; ++i)
#define SZ(a) ((int)a.size())
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define ALL(x) (x).begin(), (x).end()
#define show(a) cout<<a<<"\n" 
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define spa << ' ' <<
#define fi first
#define se second
#define pb push_back
#define endl '\n'
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef vector<ll> vv;
typedef vector<db> vd;
typedef pair<ll,ll> pp;

ll n,m,k;
vector<vector<int>> dp(100, vector<int>(100, -1));


void solve() {
    cin >> n >> m >> k;
    bool ans;
    if (n == 1)
        ans = m-1 == k;
    else if (m == 1)
        ans = n-1 == k;
    else
        ans = ((n-1)*(m+1) == k || (m-1)*(n+1) == k);

    cout << (ans ? "YES" : "NO") << endl;
}

int main() {FIN;
    int t = 1;
    cin >> t;

    cout << '\n';

    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}
