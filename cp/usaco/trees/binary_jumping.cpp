#include <bits/stdc++.h>
// #include <debugging.h>
#define fst first
#define snd second
#define pb push_back
#define spa << ' ' <<
#define nl <<'\n'
#define sz(a) ((int)a.size())
#define dbg(a) cout<<#a<<" = "<<a<<"\n"
#define all(x) (x).begin(), (x).end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define forn(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define dfor(i,a,n) for(ll i=a,ThxDem=n;i>=ThxDem;--i)
#define FREE_PALESTINE ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
typedef vector<int> vi;
typedef pair<ll,ll> pp;

template <typename... Args>
long long maxll(Args... args) {
    return std::max({ (long long)args... });
}
template <typename... Args>
long long minll(Args... args) {
    return std::min({ (long long)args... });
}

#define N 200000
int ancestor[20][N+1];
bool visited[N+1];
vi adj[N+1];
int n,q;

// mi ancestro en profundidad i, es el ancestro en poof. i-1 de mi ancestro en pof. i-1
void precalculate(int x = 1){
    for(int i = 0,k=1, n2=2*n; k < n2; ++i, k*=2){
        queue<int> q; q.push(x); visited[x] = true;
        while(!q.empty()){
            x = q.front(); q.pop();
            for(auto u : adj[x]) {
                if (visited[u]) continue;
                visited[u] = true;
                ancestor[i][u] = i==0 ? x : ancestor[i-1][ancestor[i-1][u]];
                precalculate(u);
            }
        }
    }
}

//int f(){
    //int res;
    //return res;
//}

int main() {
    FREE_PALESTINE
    mset(ancestor, 0);
    cin >> n >> q;
    int x,k;
    forn(i,1,n){
        cin >> x;  
        adj[x].pb(i);
    }

    precalculate();

    while(q--) {
        cin >> x >> k;
    }
    forn(i,0,4) {
        forn (u,1,8) cout << i spa ancestor[i][u] << ' '; 
        cout nl;
    }
    return 0;
}
