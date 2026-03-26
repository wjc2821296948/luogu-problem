#include<bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	cin >> a >> b;
	if(a <= 18){
		long long ans = 1;
		for(int i = 1;i <= a;i++){
			ans *= 10;
		}
		ans += b;
		cout << ans;
	}else{
		long long k=0,tmp=b;
		while(tmp){
			k++;
			tmp/=10;
		}
		cout<<1;
		for(int i=1;i<=a-k;i++){
			cout<<0;
		}
		if(b!=0){
			cout<<b;
		}
	}
	return 0;
}
