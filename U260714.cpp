#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 20;
int a[maxn];
int main(){
	int n,k,q;
	cin >> n >> k >> q;
	while(n--){
		int l,r;
		cin >> l >> r;
		a[l] += 1;
		a[r + 1] -= 1;
	}for(int i = 1;i <= 200000;i++){
		a[i] += a[i - 1];
	}for(int i = 1;i <= 200000;i++){
		a[i] = a[i] >= k;
		a[i] += a[i - 1];
	}
	while(q--){
		int l,r;
		cin >> l >> r;
		cout << a[r] - a[l - 1] << '\n';
	}
	return 0;
}

