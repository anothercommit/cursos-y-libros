#include <bits/stdc++.h>
// #include <debugging.h>
#define fst first
#define snd second
#define pb push_back
#define spa << ' ' <<
#define nl <<'\n'
#define sz(a) ((ll)a.size())
#define dbg(a) cout<<#a<<" = "<<a<<"\n"
#define all(x) (x).begin(), (x).end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define forn(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define dfor(i,a,n) for(ll i=a,ThxDem=n;i>=ThxDem;--i)
#define end_capitalism ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
typedef vector<ll> vi;
typedef pair<ll,ll> pp;

template <typename... Args>
long long maxll(Args... args) {
    return std::max({ (long long)args... });
}
template <typename... Args>
long long minll(Args... args) {
    return std::min({ (long long)args... });
}

typedef ll node;
#define oper sum
ll sum(ll a, ll b) {return a+b;}
#define NEUT 0
struct STree{ // segment tree for min over long long llegers
    ll n; vector<node>t;
    STree(ll n):n(n),t(2*n+5,NEUT){}
    void init(vector<node> &a){
        forn(i,0,n)t[n+i]=a[i];
        for(ll i=n-1;i>0;i--)t[i]=oper(t[2*i],t[2*i+1]);
    }
    void upd(ll p, node v){
        for(p+=n,t[p]=v;p>1;p>>=1)p^=p&1,t[p>>1]=oper(t[p],t[p^1]);
    }
    node query(ll l, ll r){
        node izq=NEUT,der=NEUT;
        for(l+=n,r+=n;l<r;l>>=1,r>>=1){
            if(l&1)izq=oper(izq,t[l++]);
            if(r&1)der=oper(t[--r],der);
        }
        return oper(izq,der);
    }
}; // usage: STree rmq(n);rmq.init(x);rmq.upd(i,v);rmq.query(s,e);

int main() {
    end_capitalism
    ll n,q;
    cin>>n>>q;
    // N redondeado a la siguiente potencia de 2 
    ll n_pow_2 = n-1;
    for (ll k=1;k<=16;k*=2)
        n_pow_2 |= n_pow_2 >> k;
    n_pow_2 += 1;

    vv v(n_pow_2, NEUT); forn(i,0,n) cin>>v[i];
    STree rmq(n_pow_2); rmq.init(v);
    ll t,a,b;
    while(q--){
        cin >>t>>a>>b;
        if (t==1){
            rmq.upd(--a,b);
        } else{
            cout << rmq.query(--a,b) << '\n';
        }
    }

    return 0;
}
