#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int w[maxn],d[maxn];
int dp[maxn][maxn];
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>d[i];
		for(int j=1;j<=n;j++){
			dp[i][j]=max(dp[i-1][j],dp[i][j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
