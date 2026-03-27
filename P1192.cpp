#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,ans;
const int maxn = 1e5 + 100;
const int mod = 100003;
ll a[maxn];
int main(){
	scanf("%lld %lld",&n,&k);
    a[0] = a[1] = 1;
    for(int i=2;i<=n;i++){
		if(i <= k){
            a[i] = (a[i - 1] * 2) % mod;
        }else{
            a[i] = (a[i - 1] * 2 - a[i - k - 1]) % mod;
        }
	}
    ans = (a[n] + mod) % mod;
    printf("%lld",ans);
    return 0;
}