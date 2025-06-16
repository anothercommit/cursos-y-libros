#include <bits/stdc++.h>
#include <iostream>

// Defines utiles
#define fore(i, a, b) for (ll i = a; i < b; i++)
#define SZ(a) ((int)a.size())
#define ALL(a) (a.begin(), a.end())
// define pair de ll
// first y second de pair

using namespace std;
typedef long long ll;

int main()
{
    // ios sync with studio(0) y cin.tie(0)
    ll n;
    cin >> n;

    set<string> names;
    string name;

    fore(i, 0, n)
    {
        cin >> name;
        if (names.find(name) != names.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            names.insert(name);
            cout << "NO" << endl;
        }
    }
}