#include<bits/stdc++.h>
using namespace std; 
int L;
bool isp(int x){
	if(x == 0 || x == 1){
		return 0;
	}
	for(int i = 2;i <= sqrt(x);i++)
		if(x % i == 0) return 0;
	return 1;
}
int main(){ 
	cin >> L;
	int ans = 0,sum = 0;
	for(int i = 1;i <= L;i++){
		if(isp(i)){
			L -= i;
			ans++;
			cout << i << endl;
		}
	}
	cout << ans << endl;
	return 0;
}
