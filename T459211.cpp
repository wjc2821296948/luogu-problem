#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],b,c;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i] == 1){
			c = i;
		}
	}
	for(int i = 1;i <= n;i++){
		if(a[i] == 1){
			b = i;
			break;
		}
	}	
	if(b == 0 && c == 0){
		cout << 0;
	}
	else{
		cout << c - b + 1;
	}
	return 0;
}
