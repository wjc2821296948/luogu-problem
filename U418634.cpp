#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n;cin >> n;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	if (a[1][1] < a[1][n] && a[1][1] < a[n][1]){
		for (int i = 1;i <= n;i++){
			for (int j = 1;j <= n;j++){
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}else if (a[1][n] < a[n][n] & a[1][n] < a[1][1]){
		for (int i = n;i >= 1;i--){
			for (int j = 1;j <= n;j++){
				cout << a[j][i] << " ";
			}
			cout << '\n';
		}
	}else if (a[n][n] < a[n][1] & a[n][n] < a[1][n]){
		for (int i = n;i >= 1;i--){
			for (int j = n;j >= 1;j--){
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}else{
		for (int i = 1;i <= n;i++){
			for (int j = n;j >= 1;j--){
				cout << a[j][i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

