#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;
long long a[maxn],sum[maxn],maxx;
int n,k;
int main(){
	cin >> n >> k;
	for(int i = 1;i <= n - 1; i++){
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}for(int i = 1; i <= n - 1; i++){
		if(i + k - 1 > n-1){
			maxx = max(sum[n - 1] - sum[i - 1],maxx);
		}else{
			maxx = max(sum[i + k - 1] - sum[i - 1],maxx);
		}
	}
	cout << sum[n - 1] - maxx;
	return 0;
}

