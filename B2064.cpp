#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[32];
signed main(){
    a[1] = a[2] = 1;
    for(int i = 3;i <= 30;i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    ll n;
    scanf("%lld",&n);
    while (n--)
    {
        ll k;
        scanf("%lld",&k);
        printf("%lld\n",a[k]);
        /* code */
    }
    
}