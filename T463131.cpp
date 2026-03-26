#include<bits/stdc++.h>
using namespace std;
const long long maxn = 1e5 + 100; 
long long n;
long long a[maxn];
long long ans = 0;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}for(int i = 1;i < n;i++){
		int tmp = max(a[i],a[i + 1]);
		ans += tmp;
	}
	cout << ans;
	return 0;
}
