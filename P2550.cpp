#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<cstdlib>
#include<cstdio> 
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
const int maxn = 2e6 + 10;
int a[35];
int n,ans[35];
int k[8];
int main(){
	cin >> n;
	for(int i = 1;i <= 7;i++){
		int id;
		cin >> id;
		a[id] = 1;
	}
	for(int i = 1;i <= n;i++){
		int sum = 0;
		for(int j = 1;j <= 7;j++){
			int id;
			cin >> id;
			if(a[id] == 1){
				sum++;
			}
		}
		ans[7 - sum]++;
	}
	for(int i = 0;i <= 6;i++){
		cout << ans[i] << " ";
	}
	return 0;
} 
