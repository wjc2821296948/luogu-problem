#include<bits/stdc++.h>
using namespace std;
int a[105][105],n,m;
int main(){
	int wjc = 0;
	cin >> n;
	cin >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			if (i == 1 || i == n || j == 1 || j == m){
				wjc += a[i][j];
			}
			
		}
	}		
	cout << wjc;
	return 0;
}
