#include <iostream>
#include <vector>
// #define fore(i, a, b) for (ll i = a; i < b; ++i)
#define fore(i,a,b) for(ll i=a,ThxDem=b;++i)
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
typedef pair<ll, ll> ii;
typedef unsigned long long ull;
typedef double db;
typedef vector<ll> vv;
typedef vector<db> vd;
typedef pair<ll,ll> pp;

ll n;
ll dp[10005];
vv h(10005);

ll f(ll x){
	ll &res=dp[x];
	if (res >= 0) return res; 
	if (x==n-1) return 0;
	if (x==n-2) return abs(h[n-1] - h[n-2]);

	return min(
		f(x+1) + abs(h[x] - h[x+1]),
		f(x+2) + abs(h[x] - h[x+2])
	);
}

int main() {FIN;
	cin >> n;
	rep(i, n) cin >> h[i];
	memset(dp, -1, sizeof(dp));
	cout << f(0) << endl;

	return EXIT_SUCCESS;
}
