#include <bits/stdc++.h>
using namespace std;
int sumA = 0, countA = 0;
int sumB = 0, countB = 0;
int n, k;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            sumA += i;
            countA++;
        } else {
            sumB += i;
            countB++;
        }
    }
    float avgA = round(sumA / countA * 10) / 10.0;
    float avgB = round(sumB / countB * 10) / 10.0;
    cout << avgA << " " << avgB << endl;

    return 0;
}
