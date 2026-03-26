#include<bits/stdc++.h>
using namespace std;
int cnt[1000]; 
int main(){
	int n,m;
	cin >> n >> m;
	for(int i = n;i <= m;i++){
		int ans = i;
		while(ans){
			cnt[ans % 10]++;
			ans /= 10;
		}
	}
	for(int i = 0;i <= 9;i++){
		cout << cnt[i] << " ";
	}
	return 0;
} 
