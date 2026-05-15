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

void solve(){
    vector<vv> adj(201);
    ll n,m;cin>>n>>m;
    forn(i,m){
        ll a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    forr(i,1,n+1){
        if (adj[i].size()==1){
            ll y=adj[adj[i][0]].size(); ll x=0;
            for(auto z : adj[adj[i][0]]) x=max(ll(adj[z].size()), x);
            cout << x spa y-1 nl;
            break;
        }
    }
}

int main() {FIN;
    ll t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
