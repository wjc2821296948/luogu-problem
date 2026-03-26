#include<bits/stdc++.h>
using namespace std;
int m,n,t,ans,fx,fy,xs,ys;
bool vis[105][105];
int mp[105][105]; 
int px[] = {0,0,1,-1};
int py[] = {1,-1,0,0};
void fun(int x,int y)
{
	if(x == fx && y == fy)
	{
		ans++;
		return;
	}
	for(int i = 0;i <= 3;i++)
	{
		int cx = x + px[i];
		int cy = y + py[i];
		if(cx < 1 || cx > n||cy > m||cy < 1 ||vis[cx][cy] == 1 || mp[cx][cy])
		{
			continue;
		}
		vis[cx][cy] = 1;
		fun(cx,cy);
		vis[cx][cy] = 0;
	}
}
int main()
{
	cin>>n>>m>>t;
	cin>>xs>>ys>>fx>>fy;
	for(int i = 1;i <= t;i++)
	{
		int u,v;
		cin>>u>>v;
		mp[u][v] = 1;
	}
	vis[xs][ys] = 1;
	fun(xs,ys);
	cout<<ans;
	return 0;
}
