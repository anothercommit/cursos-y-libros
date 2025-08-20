<<<<<<< HEAD
#include <bits/stdc++.h>
=======
#include <iostream>
#include <vector>
#include <map>
>>>>>>> 97d0375ca267c88dea830df79f181aa732c2d985
#define forr(i,a,n) for(ll i=a,ThxDem=n;i<ThxDem;++i)
#define forn(i, n) forr(i,0,n)
#define dfor(a,b,c) for(int a=b; a>=c; --a)
#define fill(a) for(auto &nashe: a) cin >> nashe;
<<<<<<< HEAD
#define filln(a,n) forr(i, 0, n) cin >> a[i];
#define SZ(a) ((int)a.size())
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define ALL(x) (x).begin(), (x).end()
#define show(a) cout<<a<<"\n" 
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
=======
#define filln(a,n) forn(i, n) cin >> a[i];
#define sz(a) ((int)a.size())
#define dbg(a) cerr<<#a<<" = "<<a<<"\n"
#define all(x) (x).begin(), (x).end()
#define show(a) cout<<a<<"\n" 
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
>>>>>>> 97d0375ca267c88dea830df79f181aa732c2d985
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

<<<<<<< HEAD
void solve() {
	
=======
struct trie { 
	map<char, trie> hijos;
	vector<string const*> words;

	void insertar(string const& s, int pos = 0) { 
		if (pos < int(s.size())) {
			char c = s[pos];
			if (hijos[c].words.size() < 3) 
				hijos[c].words.push_back(&s);
			hijos[c].insertar(s, pos+1);
		}
	} 
};

vector<string> products{"mobile","mouse","moneypot","monitor","mousepad"}; 
string searchWord = "mouse";
// vector<string> products{"havana"}; 
// string searchWord = "havana";

void solve() {
    trie t;
	sort(all(products));
    for (int i=0; i<int(products.size()); ++i){ t.insertar(products[i]);}
	vector<vector<string> > ans(searchWord.length(), vector<string>());

	int i = 0;
	for(char c : searchWord){
		trie next = t.hijos[c];

		if (!int(next.words.size())) 
			break;
		for(auto w:next.words) ans[i].push_back(*w); ++i;

		t = next;
	}


	for (auto v: ans) {
		if (sz(v)) for(auto w:v) cout << w << ' ';
		else cout << "-";
		cout << '\n';
	}
>>>>>>> 97d0375ca267c88dea830df79f181aa732c2d985
}

int main() {FIN;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return EXIT_SUCCESS;
}
