#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1e6 + 100;
ll n,k,a[maxn];
bool check(ll key){//key == long == mid
    ll ans = 0;
    for(ll i = 1;i <= n;i++){
        ans += a[i] / key;
    }
    return ans >= k;
}
int search(ll l,ll r){
    while(l <= r){
        ll mid = (l + r) / 2;
        if(check(mid)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return r;
}
ll tmp;
int main(){
    // freopen("P2440_3.in","r",stdin);
    scanf("%lld %lld",&n,&k);
    for(ll i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
        tmp += a[i];
    }
    printf("%lld",search(1,tmp));
    return 0;
}