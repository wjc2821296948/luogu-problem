#include <bits/stdc++.h>
using namespace std;
char a[50010];
int ans,cnt[130];
bool check1(int l,int r){
	for(int i=l,j=r;i<=j;i++,j--){
		if(a[i]!=a[j]){
			return 0;
		}
	}
	return 1;
}
bool check2(int l,int r){
	memset(cnt,0,sizeof(cnt));
	for(int i=l;i<=r;i++){
		cnt[(int)a[i]]++;
		if(cnt[a[i]]>2) return 0;
	}
	return 1;
	
}
int main(){
	cin>>a+1;
	int len=strlen(a+1);
	for(int l=1;l<=len;l++){
		for(int r=l+1;r<=len&&r-l+1<=52;r++){
			if(check1(l,r)==1&&check2(l,r)==1){
				ans++;
			}
		}
	}
	cout<<ans+len;
	return 0;
} 
