#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
int sum[maxn],a[maxn],n,m;
int main(){ 
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}for (int i = 1;i <= n;i++){
		sum[i]= sum[i - 1] + a[i];
	}
	cin >>m;
	while(m--){
		int l,r; 
		cin >>l >> r;
		cout << sum[r] - sum[l - 1] <<'\n';
	}
	return 0;
}

