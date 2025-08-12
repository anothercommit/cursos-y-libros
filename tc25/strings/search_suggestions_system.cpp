#include <iostream>
#include <map>
#include <stack>
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

struct trie { 
	map<char, trie> hijos;
	bool term = false;
	
	void insertar(string const& s, int pos = 0) { 
		char c = s[pos];
		if (pos < int(s.size())) 
			hijos[c].insertar(s, pos+1);
		else 
			term = true;
	} 
	bool buscar(string const& s, int pos = 0) { 
		char c = s[pos];
		if (pos < int(s.size())) 
			return hijos.count(c) && hijos[c].buscar(s, pos+1);
		else 
			return term;
	} 
};


string products[] = {"mobile","mouse","moneypot","monitor","mousepad"}; 
string searchWord = "mouse";

void solve() {
    trie t;
    for (auto s : products) t.insertar(s);
    stack next;
    next.push(t.hijos.begin());
    while (!next.empty()){
        auto current = next.peek();
    }
}

int main() {FIN;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}
