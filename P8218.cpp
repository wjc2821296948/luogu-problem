#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int maxn = 1e5;
ll a[maxn],sum[maxn];
ll n,m;
signed main(){
    scanf("%lld",&n);
    for(int i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
    }
    sum[1] = a[1];
    sum[0] = 0;
    for(int i = 2;i <= n;i++){
        sum[i] = sum[i - 1] + a[i];
    }
    scanf("%lld",&m);
    for(int i = 1;i <= m;i++){
        ll l,r;
        scanf("%lld %lld",&l,&r);
        printf("%lld\n",sum[r] - sum[l - 1]);
    }
    return 0;
}