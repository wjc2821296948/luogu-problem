#include<bits/stdc++.h>
using namespace std;
int n,m,q,a[1000005];
int wjc(int x){
	int l=1,r=n;
	while(l<r){
		int mid=(l+r)/2;
		if (a[mid]>=x) r=mid;
		else l=mid+1;
	}	
	if(a[l]==x) return l;
	else return -1; 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	for(int i=1;i<=m;i++){
		cin>>q;
		int ans=wjc(q);
		cout<<ans<<" ";
	}
	return 0;
}
