#include <bits/stdc++.h>
using namespace std;
int x,y,z,n,m;
int ans = 0;
int main() {
	scanf("%d %d %d %d %d",&x,&y,&z,&n,&m);
	for(int i = 0;i <= m && i * x <= n;i++){
		for(int j = 0;j + i <= m && i*x + j*y <= n;j++){
			for(int k = 0;i + j + k <= m && i*x + j*y + k/z <= n;k++){
				if(k % z != 0){
					continue;
				}else if(i + j + k == m && i*x + j*y + k/z == n){
					ans++;
				}
			}
		}
	}
	printf("%d",ans);
	return 0;
}