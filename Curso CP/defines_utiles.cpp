#include <bits/stdc++.h>

// Defines utiles
#define fore(i, a, b) for (ll i = a, i < b; i++)
#define SZ(a) ((int)a.size())
#define ALL(a) (a.begin(), a.end())
// define pair de ll
// first y second de pair

using namespace std;
typedef long long ll;

int main()
{
    // ios sync with studio(0) y cin.tie(0)

    set<ll> s;
    assert(SZ(s) > 0);  // tira error
    ll a = *s.begin();  // a = primer el
    ll b = *s.rbegin(); // b = ult el

    s.upper_bound(3);           // iterador 1er el >= 3, si no hay, = s.end()
    auto it = s.lower_bound(3); // iterador 1er el <= 3, sino, s.begin()
    assert(it != s.end());
    s.count(2); // cant. veces que aparece 2 en s (0 o 1)

    multiset<ll> ms; // puede haber eltos repetidos
    ms.insert(2);
    ms.insert(2);
    // *(ms.begin()) 1er elemento
    ms.erase(2); // borra todas las ocurrencias
    ms.lower_bound(3);
}
