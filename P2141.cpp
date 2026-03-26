#include<bits/stdc++.h>
using namespace std;
int a[10001],n,sum,b[10001];
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[i] = 2;
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			for(int k = 0;k < n;k++){
				if(a[i] + a[j] == a[k] && b[k] != 1){
					sum++;
					b[k] = 1;
				}
			}
		}
	}
	cout << sum;
	return 0;
}
