#include <bits/stdc++.h>
// #include <debugging.h>
#define fst first
#define snd second
#define pb push_back
#define spa << ' ' <<
#define nl <<'\n'
#define sz(a) ((int)a.size())
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
typedef vector<int> vi;
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
#define oper min
#define NEUT 1000000001
struct STree{ // segment tree for min over long long integers
    int n; vector<node>t;
    STree(int n):n(n),t(2*n+5,NEUT){}
    void init(vector<node> &a){
        forn(i,0,n)t[n+i]=a[i];
        for(ll i=n-1;i>0;i--)t[i]=oper(t[2*i],t[2*i+1]);
    }
    void upd(int p, node v){
        for(p+=n,t[p]=v;p>1;p>>=1)p^=p&1,t[p>>1]=oper(t[p],t[p^1]);
    }
    node query(int l, int r){
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
    int n,q;
    cin>>n>>q;
    // N redondeado a la siguiente potencia de 2 
    int n_pow_2=n;
    n_pow_2 -= 1;
    n_pow_2 |= n_pow_2 >> 1;
    n_pow_2 |= n_pow_2 >> 2;
    n_pow_2 |= n_pow_2 >> 4;
    n_pow_2 |= n_pow_2 >> 8;
    n_pow_2 |= n_pow_2 >> 16;
    n_pow_2 += 1;

    vv v(n_pow_2, NEUT); forn(i,0,n) cin>>v[i];
    STree rmq(n_pow_2); rmq.init(v);
    int a,b;
    while(q--){
        cin >>a>>b;
        cout << rmq.query(--a,b) << '\n';
    }

    return 0;
}
