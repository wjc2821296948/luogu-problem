#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3 + 10;
int n;
char mp[35][35];
int tx[4][2] = {{-1,1},{0,0},{-1,1},{-1,1}};
int ty[4][2] = {{0,0},{1,-1},{-1,1},{1,-1}};
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1;j <= n; j++){
			cin >> mp[i][j];
		}
	}for(int i=1;i<=n; i++){
		for(int j=1;j<=n; j++){
			for(int k=0;k<4;k++){
				int ax =i + tx[k][0], ay = j+ ty[k][0], bx = i + tx[k][1], by = j + ty[k][1];
				if(ax >n|| ax<1||ay>n||ay<1|| bx>n|| bx<1|| by >n||by<1){
					continue;
				}
				if(mp[ax][ay]== mp[i][j] && mp[i][j] == mp[bx][by] && mp[i][j]!='.'){
					cout<< mp[ax][ay];
					return 0;
				}
			}
		}
	}
	cout<< "ongoing";
	return 0;
}

