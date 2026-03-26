#include <bits/stdc++.h>
using namespace std;
int a[25],b[25],c[25],d[25],t[5],ans,ret=1e9;
void f(int x[],int k,int cut,int cur,int sum){
	if(cut>k){
		ret=min(ret,max(cur,sum-cur));
		return;
	}
	f(x,k,cut+1,cur+x[cut],sum+x[cut]);
	f(x,k,cut+1,cur,sum+x[cut]);
}
int main(){
	for(int i=1;i<=4;i++){
		cin>>t[i];
	}
	for(int i=1;i<=t[1];i++)cin>>a[i];
	for(int i=1;i<=t[2];i++)cin>>b[i];
	for(int i=1;i<=t[3];i++)cin>>c[i];
	for(int i=1;i<=t[4];i++)cin>>d[i];
		
	f(a,t[1],1,0,0);ans+=ret;ret=1e9;
	f(b,t[2],1,0,0);ans+=ret;ret=1e9;
	f(c,t[3],1,0,0);ans+=ret;ret=1e9;
	f(d,t[4],1,0,0);ans+=ret;ret=1e9;
	cout<<ans;
}
