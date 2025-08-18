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

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vv;
typedef vector<ld> vd;
typedef pair<ll,ll> pp;

ll n, x, y, c;

ll z(ll s){
    // forr (i,1,s) {
    //     ans += 4*i;
    //     if ((out=x+i-n)>0) ans -= 2*out;
    //     if ((out=y+i-n)>0) ans -= 2*out;
    //     if ((out=x-i-1)<0) ans += 2*out;
    //     if ((out=y-i-1)<0) ans += 2*out;
    // }

    // ll ans = 5 + 2*((s+2)*(s-1));
    ll ans = 2 + s*(2*s-3);
    return ans;

    // ans += 4*s;
    // if ((out=x+s-n)>0) ans -= out;
    // if ((out=y+s-n)>0) ans -= out;
    // if ((out=x-s-1)<0) ans += out;
    // if ((out=y-s-1)<0) ans += out;
}

int main() {FIN;
    cin >> n >> x >> y >> c; 
    // n = 1000000000; 
    // x = 504951981;
    // y = 646612086;
    // c = 602763371;
    
    ll left = 0;
    ll right = 2*n;
    while (right - left > 1){
        ll s = (left + right) / 2;
        if (z(s) >= c)
            right = s;
        else 
            left = s;
    }

    cout << (c==1 ? 0 : right) nl;

    return EXIT_SUCCESS;
}
