#include <bits/stdc++.h>
using namespace std;
int fun(int m, int n){
	if(m==1||m==0||n==1){
		return 1;
	}
	if(m<n){
		return fun(m, m);
	}
	return fun(m,n-1)+fun(m-n, n);
} 
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, m;
		cin >>m >> n;
		cout << fun(m, n)<< endl;
	}
	return 0;
}

