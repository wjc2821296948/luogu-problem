#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
char mp[105][105];
bool vis[105][105];
int x[] = {-1,1,0,0};
int y[] = {0,0,-1,1};
void dfs(int a,int b)
{
	for(int i = 0;i <= 4;i++)
	{
		int cx = a + x[i],cy = b + y[i];
		if(cx > n || cx < 1|| cy > m || cy < 1 || vis[cx][cy] == 1 || mp[cx][cy] == '0')
		{
			continue;
		}
		vis[cx][cy] = 1;
		dfs(cx,cy);
	}
}
int main()
{
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			if(mp[i][j] != '0' && vis[i][j] == 0)
			{
				vis[i][j] = 1;
				dfs(i,j);
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
