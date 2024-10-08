#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int distance_to_cow(int x, int y) {
    if (x == y)
        return 0;

    int distance = abs(x - y);
    int recorrido = 1;

    if (x > y) {
        while (x + recorrido < y) {
            recorrido *= 4;
        }
    } else if (true)
        ;

    return recorrido - (abs(recorrido - abs(x - y)));
}

int main() {
    freopen("file.in", "r", stdin);
    int x, y;
    cin >> x >> y;
}
