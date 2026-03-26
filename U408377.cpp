#include <bits/stdc++.h>
using namespace std;
int q;
bool wjc(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    int ans = sqrt(n);
    for (int i = 3; i <= ans; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        if (wjc(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
