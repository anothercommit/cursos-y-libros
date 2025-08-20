#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define spa << ' ' <<
using namespace std;

bool up = true;

bool is_safe(vector<int> &report){
    int size = report.size() - 1;

    rep(i, 0, size){
        int diff = report[i] - report[i+i];

        if (diff == 0 || diff > 3 || diff < -3)
            return false;

        if ((up && diff > 0) || (!up && diff < 0))
            return false;
    }

    return true;
}



int main() {
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << '\n';

    int result = 0;

    rep(_, 0, 1000) {
        vector<int> report;
        int n;

        do report.push_back((cin >> n, n));
        while (cin.get() != '\n');

        up = report[0] < report[1];

        if (is_safe(report))
            result += 1;

        else {
            int size = report.size();

            rep(i, 0, size){
                vector<int> new_report(size-1);

                rep(j, 0, size){
                    if (j == i) continue;
                    new_report[j] = report[j];
                }

                if (is_safe(new_report)){
                    result += 1;
                    break;
                }
            }
        }
    }

    cout << result << '\n';
}
