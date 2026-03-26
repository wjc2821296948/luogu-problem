#include <bits/stdc++.h>
using namespace std;
int n;
string a;
string s[10][5] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"},
    {"..X", "..X", "..X", "..X", "..X"},
    {"XXX", "..X", "XXX", "X..", "XXX"},
    {"XXX", "..X", "XXX", "..X", "XXX"},
    {"X.X", "X.X", "XXX", "..X", "..X"},
    {"XXX", "X..", "XXX", "..X", "XXX"},
    {"XXX", "X..", "XXX", "X.X", "XXX"},
    {"XXX", "..X", "..X", "..X", "..X"},
    {"XXX", "X.X", "XXX", "X.X", "XXX"},
    {"XXX", "X.X", "XXX", "..X", "XXX"},
};
int main() {
    cin >> n >> a;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            cout << s[a[j] - '0'][i];
            if (j != n - 1){
            	cout << '.';
			}
        }
        cout << '\n';
    }
    return 0;
}

