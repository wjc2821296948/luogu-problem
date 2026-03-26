#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,n = 40,m = 40;
bool vis[105][105];
int ans[105][105];
int dx[]={2,2,1,1,-1,-1,-2,-2,-2,2,-2,2};
int dy[]={1,-1,2,-2,2,-2,1,-1,2,-2,-2,2};
struct Node{
	int x,y;
};
void bfs(int x,int y){
	queue<Node> q;
	q.push({x,y});
	vis[x][y] = 1;
	while(!q.empty()){
		Node tp = q.front();
		q.pop();
		for(int i = 0;i < 12;i++){
			int cx = tp.x + dx[i],cy = tp.y + dy[i];
			if(cx > n||cx < 1||cy > m||cy < 1||vis[cx][cy]){
				continue;
			}
			ans[cx][cy] = ans[tp.x][tp.y] + 1;
			vis[cx][cy] = 1;
			q.push({cx,cy});
		}
	}
}
int main(){
	cin>>a>>b>>c>>d;
	bfs(1,1);
	cout<<ans[a][b]<<'\n';
	cout<<ans[c][d];
	return 0;
}
