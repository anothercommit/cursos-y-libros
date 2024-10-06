#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int max_overspeed(const vector<pair<int, int>> &road,
                  const vector<pair<int, int>> &journey) {
    int j = 0, counter = 0, result = 0;

    for (int i = 0, size = road.size(); i < size; ++i) {
    repeat:
        result = max(journey[j].second - road[i].second, result);

        if (counter < road[i].first) {
            counter += journey[j].first;
            ++j;
            goto repeat;
        }
    }

    return result;
}

int main() {
    freopen("file.in", "r", stdin);
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> road(N);
    vector<pair<int, int>> journey(M);

    for (int i = 0; i < N; ++i)
        scanf("%d %d", &road[i].first, &road[i].second);

    for (int i = 0; i < M; ++i)
        scanf("%d %d", &journey[i].first, &journey[i].second);

    cout << max_overspeed(road, journey) << endl;
}
