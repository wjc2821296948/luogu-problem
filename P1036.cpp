#include<bits/stdc++.h>
using namespace std;
int n,k,a[40],ans;
bool check(int x){
	if(x < 2){
		return 0;
	}
	for(int i = 2;i * i<=x;i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}
void dfs(int p,int cnt,int sum){
	if(cnt == k){
		if(check(sum)){
			ans++;
		}
		return;
	}
	for(int i = p;i <= n;i++){
		dfs(i + 1,cnt + 1,sum + a[i]);
	}
}
int main(){
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	dfs(1,0,0);
	cout << ans;
	return 0;
}
