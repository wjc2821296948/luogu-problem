#include<bits/stdc++.h>
using namespace std;
int n,k,a[100100];
bool check(int x){
	int cnt1=0,cnt2=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=x) cnt1++;
		if(a[i]==x-1) cnt2++;
	}
	cnt2=min(cnt2,k);
	return cnt1+cnt2>=x;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=0,r=n;
	while(l<r){
		int mid=(l+r+1)/2;
		if(check(mid)){
			l=mid;
		}else{
			r=mid-1;
		}
	}
	cout<<l;
	return 0;
}//»Ø·ÅNB 
