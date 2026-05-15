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

template <typename... Args>
long long maxll(Args... args) {
    return std::max({ (long long)args... });
}
template <typename... Args>
long long minll(Args... args) {
    return std::min({ (long long)args... });
}

void solve(){
    ll n; cin >>n;
    vv a(n);fill(a);
    string s; cin >> s;
    vv sumas(n); sumas[0]=a[0];
    forr(i,1,n) sumas[i]=sumas[i-1]+a[i];
    ll l=0,r=n-1;
    ll ans=0;
    while(true){
        while(l<n&&s[l]!='L')l++;
        while(r>0&&s[r]!='R')r--;
        if(l>=r) break;
        if (l) ans+=sumas[r]-sumas[l-1];
        else ans+=sumas[r];
        l++;r--;
    } 
    cout << ans nl;
}

int main() {FIN;
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
