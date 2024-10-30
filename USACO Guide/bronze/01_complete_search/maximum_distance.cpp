#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int N = (cin >> N, N);
    vector<Point> points;

    int in;
    for (; N > 0; --N)
        points.push_back(Point{(cin >> in, in), (cin >> in, in)});

    Point back;
    int result = 0, distance;
    while (points.size() > 0) {
        back = points.back();

        for (auto p = begin(points); p != end(points) - 1; ++p) {
            distance = (pow(back.x, 2) - pow(p->x, 2)) +
                       (pow(back.y, 2) - pow(p->y, 2));

            if (distance > result)
                result = distance;
        }
        points.pop_back();
    }

    cout << result << '\n';
}
