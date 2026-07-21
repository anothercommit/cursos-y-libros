#include <algorithm>
#include <bits/stdc++.h>
#include <ostream>
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

#define N 100000
ll dp[N];
ll a[N], b[N], c[N];
ll A=0, B=0, C=0;
ll n;

ll f(ll x){
    if (x==n) return 0;

    ll &res = dp[x];
    if (res > -1) return res;

    res = maxll(a[x] * (A<2), b[x] * (B<2), c[x] * (C<2));   
}

int main() {FIN;
    cin>>n;
    forn(i, n) cin>>a[i]>>b[i]>>c[i];
    cout << f(0) nl;

    return 0;
}
