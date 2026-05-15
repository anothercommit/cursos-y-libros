#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
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

int main() {FIN;
    unordered_map<string, string> d;
    int n,m; cin>>n>>m;
    string a,b;

    while(m--){
        cin >>a>>b;
        if (a.length() <= b.length()){
            d[a] = a;
            d[b] = a;
        }
        else {
            d[a] = b;
            d[b] = b;
        }
    }
    while(n--){
        cin >> a;
        cout << d[a] << ' ';
    }

    return 0;
}
