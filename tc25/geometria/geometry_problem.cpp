#include <bits/stdc++.h>
// #include <iostream>
// #include <cmath>
#define forr(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define forn(i, n) forr(i,0,n)
#define dfor(a,b,c) for(int a=b; a>=c; --a)
#define fill(a) for(auto &nashe: a) cin >> nashe;
#define filln(a,n) forr(i, 0, n) cin >> a[i];
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
	ll norm() { return (x*x + y*y); } 
	ll dist(pto b) { return (b - (*this)).norm(); } 
	bool left(pto a, pto b) { return ((a-*this) ^ (b-*this)) > 0; } 
};

string solve() {
    pto p[4];
    forn(i,4) {cin >> p[i].x; cin >> p[i].y;}
    pto a = p[0]-p[1], b = p[1]-p[2], c=p[2]-p[3], d=p[3]-p[0];
    pto d02 = p[0]-p[2], d13 = p[1]-p[3];
    ll l[]={a.norm(), b.norm(),c.norm(), d.norm(), d02.norm(), d13.norm()};

    if (l[0] == l[1] && l[1]==l[2] && l[2]==l[3])
        return (l[4] == l[5]) ? "square":"rhombus";
    if (l[0] == l[2] && l[1] == l[3])
        return (l[4]==l[5])?"rectangle":"parallelogram";
    if ((l[0] == l[3] && l[1] == l[2]) or (l[0] == l[1] && l[3] == l[2]))
        return "kite";
    return ((a^c) == 0 || (b^d) == 0)?"trapezium":"none";
}


int main() {FIN;
    int t = 1;
    // cin >> t;
    while (t--) {
        cout << solve() nl;
    }

    return EXIT_SUCCESS;
}
