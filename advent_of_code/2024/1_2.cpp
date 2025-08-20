#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define fi first
#define se second
#define spa << ' ' <<
#define ALL(x) x.begin(), x.end()
#define LENGTH 1000
using ll = long long;
using ull = unsigned long long;
using namespace std;

vector<int> l1(LENGTH);
vector<int> l2(LENGTH);

int b_search(int num, int start = 0, int end = l2.size() - 1) {
    int m = (start + end) / 2;

    if (num == l2[m])
        return m;
    else if (start > end)
        return -1;
    else if (num > l2[m])
        return b_search(num, m + 1, end);
    else
        return b_search(num, start, m - 1);
}

int main() {
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < LENGTH; ++i)
        cin >> l1[i] >> l2[i];

    sort(ALL(l2));

    ull score = 0;

    for (int n : l1) {
        int index, times = 1;

        if ((index = b_search(n)) != -1) {
            int temp_index = index;
            while (l2[++index] == n)
                ++times;
            while (l2[--temp_index] == n)
                ++times;
            // cout << "n " spa n spa index spa "times " spa times << '\n';
            // cout << (index = b_search(n)) << endl;
            score += n * times;
        }
    }

    cout << score << '\n';
}
