#include<bits/stdc++.h>
using namespace std;
int n,m;
bool vis[505][505];
int ans[505][505];
int dx[]={-2,-2,2,2,1,-1,1,-1};
int dy[]={-1,1,-1,1,2,-2,-2,2};
struct Node{
	int x,y;
};
void innt(){
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			ans[i][j] = -1;
		}
	}
}
void bfs(int a,int b){
	queue<Node> q;
	q.push({a,b});
	while(!q.empty()){
		Node tp = q.front();
		q.pop();
		for(int i = 0;i <= 7;i++)
		{
			int cx = tp.x + dx[i],cy = tp.y + dy[i];
			if(cx > n||cx < 1||cy > m||cy < 1||vis[cx][cy])
			{
				continue;
			}
			vis[cx][cy] = 1;
			ans[cx][cy]= ans[tp.x][tp.y] + 1;
			q.push({cx,cy});
		}
	}
	
}
int main(){
	int x, y;
	cin>>n>>m>>x>>y;
	innt();
	ans[x][y] = 0;
	vis[x][y] = 1;
	bfs(x,y);
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			cout<<setw(5)<<ans[i][j];
		}
		cout<<'\n';
	}
	return 0;
}
