#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
long long a,n,m,ans;
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> m;
		a += m;
		if (a > 0 && i != 1){
			ans += a;
		}
	}
	cout << ans;
	return 0;
}
