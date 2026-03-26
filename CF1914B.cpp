#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = n - k;i <= n;i++){
			cout << i << " ";
		}
		for(int i = n - k - 1;i >= 1;i--){
			cout << i << " ";
		}
		cout << '\n';
	}
	return 0;
}
