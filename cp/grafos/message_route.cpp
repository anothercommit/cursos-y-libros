#include <bits/stdc++.h>
#include <cstring>
#include <string>
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

const ll N = 100001;

ll n, m;

vector<pair<int,int>> g[N];  // u->[(v,cost)]
ll dist[N], padre[N];
void dijkstra(int x){
	memset(dist,-1,sizeof(dist)); memset(padre,-1,sizeof(padre));
	priority_queue<pair<ll,int>> q;
	dist[x]=0;q.push({0,x});
	while(!q.empty()){
		x=q.top().se;ll c=-q.top().fi;q.pop();
		if(dist[x]!=c)continue;
		for (auto [y,c] : g[x]){
			if(dist[y]<0||dist[x]+c<dist[y]){
				dist[y]=dist[x]+c;q.push({-dist[y],y});
                padre[y]=x; 
            }
        }
	}
}


int main() {FIN;
    cin >> n >> m;
    forn(i,m) {
        ll x, y; cin >>x>>y;
        g[x].pb({y, 1});
        g[y].pb({x, 1});
    }

    dijkstra(1);

    if (dist[n]>0) {
        cout << dist[n]+1 nl;
        vv ans(dist[n]);ll prev=n;
        dfor(i, dist[n]-1, 0) ans[i]=padre[prev],prev=padre[prev];
        forn(i, dist[n]) cout << ans[i] << ' ';
        cout << n nl;
    }

    else cout << "IMPOSSIBLE" nl;

    return 0;
}
