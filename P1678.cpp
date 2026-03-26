#include <bits/stdc++.h>
using namespace std;

#define int long long
const int maxN = 2e5 + 5;
int n,m,x;
int ans;
int a[maxN];
int l,r,res;
bool check(int p){
	return a[p] <= x;
}
signed main(){
	cin >> m >> n;
	for (int i = 1;i <= m;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+m);
	a[m + 1] = INT_MAX;
	for(int i = 1; i <= n; ++ i){
		cin >> x;
		l=0,r=m+ 1;
		while(r-l>1){
			int mid =(l+ r)/ 2;
			if(check(mid))l = mid;
			else r = mid;
		}
		if(x<= a[1]){
			res = a[1]-x, ans += res;
			continue;
		}
		res = INT_MAX;
		if(1 >= 1)
			res = min(res, abs(x-a[l -1]));
			res = min(res, abs(x- a[l]));
		if(r <= m){
			res = min(res, abs(x- a[r]));
		}ans += res;
	}
	cout << ans;
	return 0;
}

