#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
int a[maxn][3],sum[maxn],n;
int main(){
	cin>>n;
	for (int i = 1;i <= n;i++){
		cin >> a[i][0] >> a[i][1] >> a[i][2];
		sum[i] = a[i][0] + a[i][1] + a[i][2];
	}int ans = 0;
	for (int i = 1;i <= n;i++){
		for (int j = i + 1;j <= n;j++){
			if (abs(a[i][0] - a[j][0]) <= 5 &&abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5 && abs(sum[i] - sum[j]) <= 10){
				ans++;
			}
		}	
	}
	cout << ans;
}
// abs(x) 就是X的绝对值 ，x = 整数 
