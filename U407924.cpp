#include<bits/stdc++.h>
using namespace std;
char m[105][105];
int sum,x,y,nx,ny,a,b;
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int main(){
    cin >> a >> b;
    for(int i = 1;i <= a;i++){
    	for(int j = 1;j <= b;j++)
    	{
    		cin>>m[i][j];
		}
	}
	cin >> x >> y;
	for(int i = 0;i < 8;i++){
		nx = x + dx[i];
		ny = y + dy[i];
		if(nx > a){
			continue;
		}else if (nx < 1){
			continue;
		}else if (ny > b){
			continue;
		}else if (ny < 1){
			continue;
		}
		if(m[nx][ny] == '*')
		{
			sum++;
		}
	}
	cout << sum;
    return 0;
}

