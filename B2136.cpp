#include<bits/stdc++.h>
using namespace std;
bool wjc(int a){
	if(a == 0 || a == 1){
		return 0;
	}
	for(int i = 2;i <= sqrt(a);i++)
		if(a % i == 0) return 0;
	return 1;
}
bool ak(int n){
	int a[10],len = 0;
	while(n){
		a[++len]= n % 10;
		n /= 10;
	}
	for(int i = 1,j = len;i <= j;i++,j--){
		if(a[i] != a[j]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,sum = 0;
	cin >> n;
	for(int i = 11;i <= n;i++){
		if(ak(i) && wjc(i)){
			sum++;
		}
	}
	cout << sum;
	return 0;		
}
