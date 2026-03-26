#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n;
string mp[maxn];
string t;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>mp[i];
	cin>>t;
	sort(mp+1,mp+1+n);
	for(int i=1;i<=n;i++){
		if(!mp[i].find(t)){
			cout<<mp[i]<<'\n';
		}
	}
	return 0;
}
