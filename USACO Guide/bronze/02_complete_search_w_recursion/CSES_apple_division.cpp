#include <bits/stdc++.h>
#include <vector>
#define rep(i, a, b) for (int i = a, lim = b; i < lim; ++i)
#define fi first
#define se second
#define spa << ' ' <<
#define ALL(x) x.begin(), x.end()
using ll = long long;
using ull = unsigned long long;
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> p(n);
    int left = 0, right = 0;

    rep(i, 0, n){
        cin >> p[i];

        if (left < right)
            left += p[i];
        else
           right += p[i];
    }

    cout << abs(left - right) << '\n'; 
}

