#include<bits/stdc++.h>
using namespace std;
char a[1010];
int ans;
int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	int len = n;
	for(int i = 1;i <= len - 1;i++){
		if(a[i] == 'V' && a[i + 1] == 'K'){
			ans++;
			a[i] = a[i + 1] = '0';
		}
	}
	for(int i = 1;i <= len - 1;i++){
		if(a[i] != '0' && a[i] == 'V' && a[i + 1] == 'V' || a[i] == 'K' && a[i + 1] == 'K'){
			ans++;
			break;
		}
	}
	cout << ans;
	return 0;
}
