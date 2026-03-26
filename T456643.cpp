#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h;
    cin >> n >> h;
    long long a[n + 10];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            if (a[i] * a[j] <= h) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
