#include <bits/stdc++.h>
using namespace std;
long long n,m,l,r,x;
long long a[10000006];
#define int long long
bool check(int x){
	int res =0;
	for(int i = 1;i<= n;++ i)if(a[i]>x)res += a[i]- x;//当前树的高度大于二分的高度，上面的木材都被!
	return res >= m;
}
signed main(){
	cin >> n >> m;
	for(int i=1; i<= n; ++ i)cin >> a[i];
	l=0,r= 2e9 + 1;
	while(r-l>1){
		int mid =(l+r)/2;
		if(check(mid))l = mid;
		else r = mid;
	}
	cout << l << "\n";
	return 0;
}

