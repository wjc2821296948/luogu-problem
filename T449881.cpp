#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 10; 
long long n,k,a[maxn];
bool vis[maxn];
long long ans;
int main(){
	int p = 1;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(!vis[a[i]]){
			ans += i - p;
			vis[a[i]] = 1;
			p++;
		}
		if(p > k){
			cout << ans;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}

