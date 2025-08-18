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

ll bpow(ll a, ll b) {
    ll res=1;
    while (b>0) {
        if (b%2==1) res *= a;
        a*=a;
        b/=2;
    }
    return res;
}

ll z(ll s){
    return 1 + 2*s*(s+1) 
        - bpow(max(x+s-n,0),2) - bpow(max(y+s-n,0),2) 
        - bpow(min(x-s-1,0),2) - bpow(min(y-s-1,0),2);
}

int main() {FIN;
    cin >> n >> x >> y >> c; 
    
    // ll s=0;
    // for (ll j=n, lim=2*n+1; j >= 1; j /= 2)
    //     while (s+j < lim && z(s+j) <= c)
    //         s += j;

    // if (z(s) < c) s++;
    // 
    // cout << s nl;
    cout << z(c) nl;

    return EXIT_SUCCESS;
}
