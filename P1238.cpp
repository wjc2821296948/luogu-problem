#include<bits/stdc++.h>
using namespace std;
int n,m,sx,sy,ex,ey;
int tx[] = {0,-1,0,1};
int ty[] = {-1,0,1,0};
int mp[20][20];
int ansx[200],ansy[200],len;
bool vis[200][200];
bool flag;
void dfs(int x,int y)
{
	if(x == ex && y == ey)
	{
		flag = 1;
		for(int i = 1;i <= len;i++)
		{
			cout<<"("<<ansx[i]<<","<<ansy[i]<<")";
			if(i != len)
			{
				cout<<"->";
			}
		}
		cout<<'\n';
		return;
	}
	for(int i = 0;i < 4;i++)
	{
		int cx = x + tx[i];
		int cy = y + ty[i];
		if(cx > n||cx<1||cy>m||cy<1||mp[cx][cy] == 0||vis[cx][cy])
		{
			continue;
		}
		vis[cx][cy] = 1;
		ansx[++len] = cx;
		ansy[len] = cy;
		dfs(cx,cy);
		vis[cx][cy] = 0;
		len--;
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
	cin>>sx>>sy>>ex>>ey;
	ansx[++len] = sx;
	ansy[len] = sy;
	vis[sx][sy] = 1;
	dfs(sx,sy);
	if(!flag)
	{
		cout<<-1;
	}
	return 0;
}
