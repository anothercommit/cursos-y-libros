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

int solve() {
    ll n;
    ll abc[3];
    cin >> n >> abc[0] >> abc[1] >> abc[2];
    sort(abc, abc + 3);

    fore (k, 0, 100000){
        fore (i, 1, 3){
            int rem = n-abc[i]*k;
            if (abc[0] % rem == 0)
                return n/abc[0] + k;
        }
    }
    return 0;
}

int main() {FIN;
    int t = 1;
    // cin >> t;
    // cout << '\n';
    while (t--) {
        cout << solve() << endl;
    }

    return EXIT_SUCCESS;
}
