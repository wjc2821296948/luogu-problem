#include <bits/stdc++.h>
using namespace std;
int T;
int main() {
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        map<int, int> a;
        int max = 0;
        for (int i = 1; i <= N; i++) {
            int num;
            cin >> num;
            a[num]++;
            int score = num * a[num];
            if (score > max) {
                max = score;
            }
        }
        cout << max << endl;
        max =  INT_MIN;
    }
    return 0;
}
