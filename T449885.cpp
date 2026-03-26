#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int a[maxn],n, m, k,ans = 0,sum = 0;
int main(){
	cin >> n >> m >> k;
	for(int i=1;i<=n;i++){
		int tmp;
		cin >> tmp;
		a[tmp] = 1;
	}
	while (ans < n){
		ans += m;
		if (a[ans]){
			m++;
		}
		sum++;
	}
	cout << sum;
	return 0;
}

