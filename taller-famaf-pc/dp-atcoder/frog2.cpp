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

ll n;
ll h[100005];
ll dp[100005];

ll f(ll x){
    ll &res=dp[x];
    if (res >= 0) return res; 
    if (x==n-1) return 0;
    if (x==n-2) return abs(h[n-1] - h[n-2]);

    res = min(
        f(x+1) + abs(h[x] - h[x+1]),
        f(x+2) + abs(h[x] - h[x+2])
    );
    return res;
}

int main() {FIN;
    cin >> n;
    forn(i, n) cin >> h[i];
    memset(dp, -1, sizeof(dp));
    cout << f(0) << endl;

    return EXIT_SUCCESS;
}
