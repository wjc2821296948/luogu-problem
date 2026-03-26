#include<bits/stdc++.h>
using namespace std;
int m,n;
bool vis[105][105];
char mp[105][105]; 
int px[] = {0,0,1,-1};
int py[] = {1,-1,0,0};
void fun(int x,int y){
	if(x < 1 || x > n||y > m||y < 1 ||vis[x][y] == 1 || mp[x][y] == '#'){
		return;
	}
	vis[x][y] = 1;
	for(int i = 0;i <= 3;i++){
		int cx = x + px[i];
		int cy = y + py[i];
		fun(cx,cy);
	}
}
int main(){
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin>>mp[i][j];
		}
	}
	fun(1,1);
	if(vis[n][m] == 1){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}
