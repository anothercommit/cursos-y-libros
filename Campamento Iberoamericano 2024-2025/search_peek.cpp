#include <iostream>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define spa << ' ' <<
using namespace std;

int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

void solve() {
    int l = 0, r = 8;

    int mid = (l + r) / 2;

    while (l < r) {
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;

        else if (arr[mid] > arr[mid + 1])
            break;

        else
            r = mid;
    }

    cout << l << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;

    cout << '\n';

    while (t--) {
        solve();
    }
}
