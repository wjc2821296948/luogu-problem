#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;  cin >> t;
    while (t--) {
        int n, m;  cin >> n >> m;
        if (n - 1 == 0 || m - 1 == 0){
        	cout << max(n,m) << "\n";
        	continue;
		}
        int gcd = __gcd(n - 1,m - 1);
        int x = (n - 1) / gcd,y = (m - 1) / gcd;\
        int ans = min(n / x,m / y);
        if (x != y)  ans++;
        cout << ans << "\n";
    }
    
    return 0;
}
