#include <iostream>
#include <cmath>
using namespace std;
double ans(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int wjc(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a = ans(x1, y1, x2, y2);
    double b = ans(x2, y2, x3, y3);
    double c = ans(x1, y1, x3, y3);
    double s = (a + b + c) / 2;
    return round(0.5 * s * s * sqrt(s * s - a * a - b * b + c * c));
}
int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int sum = wjc(x1, y1, x2, y2, x3, y3);
    cout << sum << endl;
    return 0;
}
