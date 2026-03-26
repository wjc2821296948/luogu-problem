#include<bits/stdc++.h>
using namespace std;
int len;
int a[1010][1010],mx[1000010],n,q,x;
int main(){
	cin >> n >> q;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			mx[++len] = a[i][j];
		}
	}
	sort(mx + 1,mx + len + 1);
	while(q--){
		cin >> x;
		int l = 1,r = len;
		while(l <= r){
			int mid = (l + r) >> 1;
			if(mx[mid] < x){
				l = mid + 1;
			}else{
				r = mid - 1;
			}
		}
		cout << min(len - r,n) << '\n';
	}
	return 0;
}
