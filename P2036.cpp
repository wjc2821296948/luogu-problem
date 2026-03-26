#include <bits/stdc++.h>
using namespace std;
int maxn = 1e9 + 500;

int n, s[20],b[20];

void fun(int tmp,int a,int sum){
	if(tmp > n){
		if(a == 1 && sum == 0)	return;
		maxn = min(maxn,abs(a-sum));
		return ;
	}
	fun(tmp + 1,a * s[tmp] ,sum + b[tmp]);
	fun(tmp + 1,a,sum);
}
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> s[i] >> b[i];
	}
	fun(1,1,0);
	cout << maxn;
	return 0;
}

