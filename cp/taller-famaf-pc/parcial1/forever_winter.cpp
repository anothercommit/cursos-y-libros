#include <bits/stdc++.h>
// #include <debugging.h>
#define forr(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define forn(i, n) forr(i,0,n)
#define dfor(i,a,n) for(ll i=a,ThxDem=n;i>=ThxDem;--i)
#define fill(a) for(auto &nashe: a) cin >> nashe;
#define filln(a,n) forn(i,n) cin >> a[i];
#define sz(a) ((int)a.size())
#define dbg(a) cout<<#a<<" = "<<a<<"\n"
#define all(x) (x).begin(), (x).end()
#define spa << ' ' <<
#define fi first
#define se second
#define pb push_back
#define nl <<'\n'
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;
typedef vector<ll> vv;
typedef pair<ll,ll> pp;

template <typename... Args>
long long maxll(Args... args) {
    return std::max({ (long long)args... });
}
template <typename... Args>
long long minll(Args... args) {
    return std::min({ (long long)args... });
}

vector<vv> adj(201);
ll mayor1=1,mayor2=1;

ll dfs(ll nodo, ll prev=-1, ll k=0){
    if (adj[nodo].size()==1) return k;
    for (auto vecino : adj[nodo])
        if (vecino != prev)
            return dfs(vecino, nodo, k+1);
    return -1;
}

void solve(){
    ll n,m;cin>>n>>m;
    ll sizes[201]; memset(sizes, 0, sizeof(sizes));
    dbg(sizes[0]);
    // forn(i,m){
    //     ll a,b;cin>>a>>b;
    //     adj[a].pb(b);
    //     adj[b].pb(a);
    //     sizes[a]++; sizes[b]++;
    // }
    // forr(i,1,n+1)
    //     if (sizes[i] > sizes[mayor1])
    //         mayor2=mayor1, mayor1=i;
    // ll d = dfs(mayor1);
    // if (d==2) cout << adj[mayor1].size() spa adj[mayor2].size() nl;
    // else cout << adj[mayor2].size() spa adj[mayor1].size() nl;
}

int main() {FIN;
    ll t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
