#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int mp[1005][1005],mp2[1005][1005];
bool vis[1005][1005];
int x[] = {0,0,1,1,1,-1,-1,-1};
int y[] = {1,-1,0,1,-1,0,1,-1};
void dfs(int a,int b)
{
	for(int i = 0;i < 8;i++)
	{
		int cx = a + x[i],cy = b + y[i];
		if(cx > n || cx < 1|| cy > m || cy < 1  || mp2[cx][cy] != 0 || vis[cx][cy])
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
			if(mp[i][j])
			{
				mp2[i][j] = 9;
				for(int k = 0;k < 8;k++)
				{
					int cx = i + x[k],cy = j + y[k];
					if(cx > n || cx < 1|| cy > m || cy < 1 )
					{
						continue;
					}
					mp2[cx][cy]++;
				}
			}
		}
	}
	int ans = 0;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			if(mp2[i][j] == 0 && !vis[i][j])
			{
				vis[i][j] = 1;
				dfs(i,j);
				ans++;
			}
			if(mp[i][j] == 0 && mp2[i][j] != 0)
			{
				int flg = 1;
				for(int k = 0;k < 8;k++)
				{
					int cx = i + x[k],cy = j + y[k];
					if(cx > n || cx < 1|| cy > m || cy < 1 )
					{
						continue;
					}
					if(mp2[cx][cy] == 0)
					{
						flg = 0;
	 				}
				}
				if(flg == 1)
				{
					ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
