#include <bits/stdc++.h>
using namespace std;
long long n,m,a[2010][2010],ans[10];
long long sum;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			ans[a[i][j]]++;
		}
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			sum+=ans[a[i][j]]-1;
			if(a[i+1][j]==a[i][j]) sum--;
			if(a[i][j+1]==a[i][j]) sum--;
			if(a[i-1][j]==a[i][j]) sum--;
			if(a[i][j-1]==a[i][j]) sum--;
		}
	}
	cout<<sum;
	return 0;
}

