#include <bits/stdc++.h>
// #define fore(i, a, b) for (ll i = a; i < b; ++i)
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define feach(x, a) for(auto x : a)
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

const ll COTA = 2*1e5 + 5;
ll n;
vector<vector<ll>> g(COTA);
vv ans(COTA);

ll dfs(ll x){
    ans[x]=0;
    for (auto y : g[x]) {
        ans[x] += 1 + dfs(y);
    }

    return ans[x];
}

void solve() {
    cin >> n;
    fore(i, 2, n+1) {
        ll db; cin >> db;
        g[db].pb(i);
    }

    dfs(1);
    fore (i, 1, n+1) cout << ans[i] << ' ';
    cout << '\n';
}

int main() {FIN;
    int t = 1;
    // cin >> t;

    // cout << '\n';

    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}
