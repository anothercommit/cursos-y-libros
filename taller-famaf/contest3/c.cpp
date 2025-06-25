#include <bits/stdc++.h>
// #define fore(i, a, b) for (ll i = a; i < b; ++i)
#define fore(i,a,b) for(ll i=a,ThxDem=b;i<ThxDem;++i)
#define dfore(a,b,c) for(int a=b; a>=c; --a)
#define rep(i, b) for (ll i = 0; i < b; ++i)
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
#define endl '\n'
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef vector<ll> vv;
typedef vector<db> vd;
typedef pair<ll,ll> pp;

int n, a, b, c;
vector<int> vis(4000, -1);

int f(int s, int ans=1) {
    if (s == n) return ans;
    if (s > n) return -1;
    if (vis[s] >= ans) return -1;
    vis[s] = ans;
    return max({f(s+a, ans+1), f(s+b, ans+1), f(s+c, ans+1)});
}

int main() {FIN;
    cin >> n >> a >> b >> c;

    cout << max({f(a), f(b), f(c)}) << endl;

    return EXIT_SUCCESS;
}
