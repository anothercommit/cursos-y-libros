#include <bits/stdc++.h>
#define forr(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define forn(i, n) forr(i,0,n)
#define dfor(a,b,c) for(int a=b; a>=c; --a)
#define fill(a) for(auto &nashe: a) cin >> nashe;
#define filln(a,n) forr(i, 0, n) cin >> a[i];
#define sz(a) ((int)a.size())
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
#define nl <<'\n'
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vv;
typedef vector<ld> vd;
typedef pair<ll,ll> pp;

struct pto { 
	ll x, y; 
	pto() : x(0), y(0) {} 
	pto(ll _x, ll _y) : x(_x), y(_y) {} 
	pto operator+(pto b) { return pto(x+b.x, y+b.y); } 
	pto operator-(pto b) { return pto(x-b.x, y-b.y); } 
	pto operator+(ll k) { return pto(x+k, y+k); } 
	pto operator*(ll k) { return pto(x*k, y*k); } 
	pto operator/(ll k) { return pto(x/k, y/k); } 
	ll operator*(pto b) { return x*b.x + y*b.y; } 
	pto proj(pto b) { return b*((*this)*b) / (b*b); } 
	ll operator^(pto b) { return x*b.y - y*b.x; } 
	bool operator<(pto b) { return x!=b.x ? x<b.x : y<b.y;} 
	ld norm() { return sqrt(x*x + y*y); } 
	ld dist(pto b) { return (b - (*this)).norm(); } 
	bool left(pto a, pto b) { return ((a-*this) ^ (b-*this)) > 0; } 
};

vector<pto> upper_hull(vector<pto>& p) { 
    vector<pto> uh; 
    sort(p.begin(), p.end()); 
    forn(i, sz(p)) { 
        while(sz(uh)>=2 && ((uh[sz(uh)-1]-uh[sz(uh)-2])^(p[i]-uh[sz(uh)-2]))>=0) 
            uh.pop_back(); 
        uh.pb(p[i]); 
    } 
    return uh; 
}

vector<pto> lower_hull(vector<pto>& p) { 
    vector<pto> uh; 
    sort(p.begin(), p.end()); 
    forn(i, sz(p)) { 
	while(sz(uh)>=2 && ((uh[sz(uh)-1]-uh[sz(uh)-2])^(p[i]-uh[sz(uh)-2]))<=0) 
	    uh.pop_back(); 
	uh.pb(p[i]); 
    } 
    return uh; 
}


void solve() {
    vector<pto> form(4);
    forn(i,4) {cin >> form[i].x; cin >> form[i].y;}
    vector<pto> uh = upper_hull(form);
    vector<pto> lh = lower_hull(form);
    cout << "uh" nl;
    for(auto a:uh) cout << a.x spa a.y nl;
    cout << "lh" nl;
    for(auto a:lh) cout << a.x spa a.y nl;
}

int main() {FIN;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}
