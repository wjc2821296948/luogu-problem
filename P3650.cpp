#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3 + 10;
int n,a[maxn],ans = 1e9;
int main(){
	cin >> n;
	for(int i = 1;i <= n; i++){
		cin >> a[i];
	} 
	for(int i = 0;i <= 100;i++){
		for(int j = i + 1;j - i <= 17;j++){
			int sum = 0;
			for(int k = 1;k <= n;k++){
				if(a[k] >= i && a[k] <= j){
					continue;
				}
				sum += min(abs(a[k] - i) * abs(a[k] - i), abs(a[k] - j) * abs(a[k] - j));
			}
			ans = min(ans, sum);
		}
	}
	cout << ans;
	return 0;
}

