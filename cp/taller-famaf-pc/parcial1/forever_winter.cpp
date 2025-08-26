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
    ll sizes[201]={};
    // dbg(sizes[0]);
    forn(i,m){
        ll a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
        sizes[a]++; sizes[b]++;
    }
    forr(i,1,n+1)
        if (sizes[i] > sizes[mayor1])
            mayor2=mayor1, mayor1=i;
    ll d = dfs(mayor1);
    if (d==2) cout << sizes[mayor1] spa sizes[mayor2] nl;
    else cout << sizes[mayor2] spa sizes[mayor1] nl;
    forn(i,n) adj[i].clear();
}

int main() {FIN;
    ll t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
