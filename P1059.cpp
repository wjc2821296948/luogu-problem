#include<bits/stdc++.h>
using namespace std;
int a[105],cnt[1005];
int n;
int sum = 0;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		cnt[a[i]]++;
		if(cnt[a[i]] == 1){
			sum++;
		}
	}
	cout << sum << '\n';
	for(int i = 1;i <= 1000;i++){
		if(cnt[i] != 0){
			cout << i << " ";
		}
	}
	return 0;
}
