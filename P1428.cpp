#include<bits/stdc++.h>
using namespace std;
int a[101],i,j,x,n;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		int x = 0;
		cin >> a[i];
		for(int j = 1;j < i;j++){
			if(a[j] < a[i]) x++;
		}
		cout << x ;
		printf(" ");
	}
	
	return 0;
}
