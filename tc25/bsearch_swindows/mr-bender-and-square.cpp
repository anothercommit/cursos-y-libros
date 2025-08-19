#include <bits/stdc++.h>
// #include <debugging.h>
#define forr(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define forn(i, n) forr(i,0,n)
#define dfor(a,b,c) for(ll a=b; a>=c; --a)
#define fill(a) for(auto &nashe: a) cin >> nashe;
#define filln(a,n) forr(i, 0, n) cin >> a[i];
#define sz(a) ((ll)a.size())
#define dbg(a) cout<<#a<<" = "<<a<<"\n"
#define all(x) (x).begin(), (x).end()
#define show(a) cout<<a<<"\n" 
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define spa << ' ' <<
#define fi first
#define se second
#define pb push_back
#define nl <<'\n'
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) std::max(ll(a), ll(b))
#define min(a,b) std::min(ll(a), ll(b))

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vv;
typedef vector<ld> vd;
typedef pair<ll,ll> pp;

ll n, x, y, c;

ll z(ll s){
    ll oxr=abs(max(x+s-n,0)), oxl=abs(min(x-s-1,0)), 
       oyd=abs(max(y+s-n,0)), oyu=abs(min(y-s-1,0));

    return 1 + 2*s*(s+1) - oyd*oyd - oyu*oyu - oxr*oxr - oxl*oxl
        + (max(x+oyd-n, 0)*(x+oyd-n-1)
        + min(x-oyd, 0)*(x-oyd-1)
        + max(x+oyu-n, 0)*(x+oyu-n-1)
        + min(x-oyu, 0)*(x-oyu-1))/2;
}

int main() {FIN;
    cin >> n >> x >> y >> c; 
    
    ll s=0;
    for (ll j=n, lim=2*n+1; j >= 1; j /= 2)
        while (s+j < lim && z(s+j) <= c)
            s += j;

    if (z(s) < c) s++;

    #undef max
    if (c == n*n) s=max({n-x+n-y, x-1+n-y, x-1+y-1,n-x+y-1});
        
    cout << s nl;

    return EXIT_SUCCESS;
}
