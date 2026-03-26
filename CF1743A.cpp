#include<bits/stdc++.h>
using namespace std;
int n,a[10]={0,216,168,126,90,60,36,18,6},b[10];
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1;i <= n;i++){
			cin >> b[i];
		}
		cout << a[n] << endl;
	}
	return 0;
}
