#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2010;
int n,m,ans1,ans2;
int res[MAXN][MAXN],Left[MAXN][MAXN],Right[MAXN][MAXN],up[MAXN][MAXN];
int main(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> res[i][j];
			Left[i][j] = Right[i][j] = j;
			up[i][j] = 1;
		}
	}
	for(int i = 1;i <= n;i++)
		for(int j = 2;j <= m;j++)
			if(res[i][j] != res[i][j-1])
				Left[i][j] = Left[i][j-1];
	for(int i = 1;i <= n;i++)
		for(int j = m - 1;j > 0;j--)
			if(res[i][j] != res[i][j+1])
				Right[i][j] = Right[i][j+1];
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			if(i > 1 && res[i][j] != res[i-1][j]){
				Left[i][j] = max(Left[i][j],Left[i-1][j]);
				Right[i][j] = min(Right[i][j],Right[i-1][j]);
				up[i][j] = up[i-1][j] + 1;
			}
			int a = Right[i][j] - Left[i][j] + 1;
			int b = min(a,up[i][j]);
			ans1 = max(ans1,b * b);
			ans2 = max(ans2,a * up[i][j]);
		}
	}
	cout << ans1 << endl << ans2;
	return 0;
}
