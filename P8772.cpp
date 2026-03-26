#include <bits/stdc++.h>
using namespace std;
long long n,ans;
const int maxn = 2e5 + 10;
long long a[maxn],sum[maxn];
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
	}
    for(int i = 1; i <= n - 1; i++){
        ans += a[i] * (sum[n] - sum[i]);
	}
	cout << ans;
	return 0;
}

