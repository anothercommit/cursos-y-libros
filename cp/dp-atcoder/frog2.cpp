#include <bits/stdc++.h>
#define forr(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define forn(i, n) forr(i,0,n)
#define dfor(a,b,c) for(int a=b; a>=c; --a)
#define fill(a) for(auto &nashe: a) cin >> nashe;
#define filln(a,n) forr(i, 0, n) cin >> a[i];
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
#define nl <<'\n'
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vv;
typedef vector<ld> vd;
typedef pair<ll,ll> pp;

ll n, k;
ll h[100005];
ll dp[100005];

ll f(ll x){
    ll &res=dp[x];
    if (res > -1) return res; 
    if (x==n-1) return 0;

    res = 1e4;
    for (ll i=1; x+i<n && i<=k; i++)
        res = min(res, f(x+i) + abs(h[x]-h[x+i]));

    return res;
}

int main() {FIN;
    cin >> n >> k;
    forn(i, n) cin >> h[i];
    memset(dp, -1, sizeof(dp));
    cout << f(0) << endl;

    return EXIT_SUCCESS;
}
