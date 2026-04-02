#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k = 3,ans;
const int maxn = 1e5 + 100;
ll a[maxn];
int main(){
	scanf("%lld",&n);
    a[0] = a[1] = 1;
    for(int i=2;i<=n;i++){
		if(i <= k){
            a[i] = (a[i - 1] * 2);
        }else{
            a[i] = (a[i - 1] * 2 - a[i - k - 1]) ;
        }
	}
    ans = a[n];
    printf("%lld",ans);
    return 0;
}