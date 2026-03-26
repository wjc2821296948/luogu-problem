#include <bits/stdc++.h>
using namespace std;
int t;
long long wjc(long long n) {
    long long sum = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                sum++;
            else
                sum += 2;
        }
    }
    return sum;
}
int main() {
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        cout << wjc(x) << endl;
    }
    return 0;
}
