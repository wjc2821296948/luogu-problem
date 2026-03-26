#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                printf("+");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}
