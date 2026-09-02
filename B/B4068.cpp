#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int maxn = 4008;
ll a[maxn];
// bool auth[maxn];
// struct str
// {
//     bool auth;
//     ll key;
//     /* data */
// }a[maxn];

ll n;
bool find(ll t,ll k){
    for(int i = 1;i <= k;i++){
        if(a[i] == t){
            // auth[t] = true;
            // printf("%lld t:%lld a[i]:%lld\n",__LINE__,t,a[i]);
            return true;
        }
    }
    // printf("huoz ");
    return false;
}
signed main(){
    scanf("%lld",&n);
    // for(int i = 1;i <= maxn;i++){
    //     auth[i] = false;
    // }
    a[1] = 1;
    a[0] = 1;
    for(int k = 2;k <= n;k++){
        ll tmp = a[k - 1] - k;
        if(tmp > 0 && find(tmp,k) == false){
            a[k] = tmp;
            // auth[tmp] = true;
            // printf("k:%lld,tmp:%lld--in\n",k,tmp);
            // printf("%lld",)
        }else{
            a[k] = tmp + (2 * k);
            // auth[tmp] = true;
            // printf("k:%lld,tmp:%lld--out\n",k,tmp);
        }
        // find(tmp,k);
    }
    // for(int i = 1;i <= 8;i++){
    //     if(auth[i]){
    //         printf("%lld-ture\n",i);
    //     }else{
    //         printf("%lld-false\n",i);
    //     }
    // }
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i++){
        printf("%lld ",a[i]);
    }
    return 0;
}