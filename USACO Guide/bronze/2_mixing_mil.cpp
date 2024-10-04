#include <iostream>
using namespace std;

int main() {
    int c[3], m[3];

    for (int i = 0; i < 3; ++i)
        cin >> c[i] >> m[i];

    int to = 1;
    m[to] = min(m[to - 1] + m[to], c[to]);
    m[to - 1] = max(c[to] - (m[to - 1] + m[to]), 0);

    to = 2;
    m[to] = min(m[to - 1] + m[to], c[to]);
    m[to - 1] = max(c[to] - (m[to - 1] + m[to]), 0);

    to = 0;
    m[to] = min(m[2] + m[to], c[to]);
    m[2] = max(c[to] - (m[2] + m[to]), 0);

    to = 1;
    m[to] = min(m[to - 1] + m[to], c[to]);
    m[to - 1] = max(c[to] - (m[to - 1] + m[to]), 0);

    cout << m[0] << endl;
    cout << m[1] << endl;
    cout << m[2] << endl;
}
