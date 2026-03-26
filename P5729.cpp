#include<iostream>
using namespace std;
int a[30][30][30];
int n,l,h,m,l1,l2,y1,y2,z1,z2,s;
int main(){
	cin >> n >> l >> h;
	cin >> m;
	for(int b = 1;b <= m;b++){
		cin >> l1 >> y1 >> z1 >> l2 >> y2 >> z2;
		for(int i = min(l1,l2);i <= max(l1,l2);i++){
			for(int j = min(y1,y2);j <= max(y1,y2);j++){
				for(int k = min(z1,z2);k <= max(z1,z2);k++){
					a[i][j][k] = 1;
				}
			}
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= l;j++){
			for(int k = 1;k <= h;k++){
				if(a[i][j][k] == 0){
					s++;
				}
			}
		}
	}
	cout << s << endl;
	return 0;
} 
