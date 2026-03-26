#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7 + 10;
int n, m;
int a[maxn], l, r, L;
bool check(int x){
	int res =0,pre = 0;
	for(int i= 1; i<= n + 1; ++ i){
		if(a[i]- pre < x){ //之前的符合的石头位置
			res ++;//之前到当前石头的距离不符合 当前石头要被移走
		}else {
			pre = a[i];
		} 
	}
	return res <= m;
}
int main(){
	cin >> L >> n >> m;
	for(int i= 1; i <= n; ++ i)cin >> a[i];
	a[n + 1]= L;
	l=0,r= 1e9 + 1;
	while(r-l>1){
		int mid =(l+ r)/ 2;
		if(check(mid)) l = mid;
		else r = mid;
	}
	cout<< l << "\n";
	return 0;
}

