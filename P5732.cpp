#include <bits/stdc++.h>
using namespace std;
int n,a[105][105];
int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		a[i][1] = 1;
		for(int j = 1;j <= n;j++){
			a[i][j] = 1;
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 2;j < i;j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
