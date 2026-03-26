#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, adezuihou, bdezuihou;
    cin >> a >> b >> adezuihou >> bdezuihou;
    int sum = (adezuihou * 60 + bdezuihou) - (a * 60 + b);
    cout << sum << endl;
    return 0;
}
