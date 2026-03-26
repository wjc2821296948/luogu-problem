#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int n;
int main() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
                sum++;
            }
        }
    }
    cout << sum << endl;

    return 0;
}
