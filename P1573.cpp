#include<bits/stdc++.h>
using namespace std;
long long int n,ans,i,j;
int main(){
	cin>>n;
	for(i=1,j=1;i<=n;i++,j=(j*2)%1000007){
        n-=i;
        ans=(ans+i*j)%1000007;
    }
	cout<<(ans+n*j)%1000007;
	return 0;
}
