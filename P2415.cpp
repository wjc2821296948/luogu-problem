#include <bits/stdc++.h>
using namespace std;
int n, x, a[35];
long long ans = 1, sum;
int main(){
	n = 0; 
	while(cin >> x){
		n++;
		sum += x;
	}
	for(int i = 1;i <= n - 1; i++){
		ans *= 2;
	}
	cout<< ans * sum;
	return 0;
}

