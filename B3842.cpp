#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int m,n;
int a[maxn],b[maxn] = {false},c[maxn] = {false};
int ans = true;
int main() {
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		scanf("%d",&a[i]);
		int tmp = a[i];
		b[tmp] = true;
	}
	for (int i = 0;i < n;i++){
		if(b[i] == false && c[i] == false){
			c[i] = true;
			printf("%d ",i);
			ans = false;
		}
	}
	if(ans == true){
		printf("%d",n);
	}
	return 0;
}