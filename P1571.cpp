#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e5 + 1000;

ll a[maxn],b[maxn];
ll n,m;
int search(ll l,ll r,ll key){
    while (l <= r) {
        ll mid = (r + l) / 2;
        if (b[mid] < key) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}
int main(){
    scanf("%lld %lld",&n,&m);
    // printf("%lld  %lld",n,m);
    for(int i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
        // printf("a[i] %lld\n",&a[i]);
    }
    for(int i = 1;i <= m;i++){
        scanf("%lld",&b[i]);
        // printf("b[i] %lld\n",&b[i]);
    }
    // int tmp = max(n,m);
    // sort(a + 1,a + n + 1,cmp);
    sort(b + 1,b + m + 1);
    // for(int i = 1;i <= n;i++){
    //     c[a[i]] = true;
    // }
    // for(int i = 1;i <= m;i++){
    //     if(c[b[i]]){
    //         printf("%lld ",i);
    //     }
    // }

    for (int i = 1; i <= n; i++) {
        ll tmp = b[search(1,m,a[i])];
        if(tmp != a[i]){
            continue;
            // printf("in it");
        }
        printf("%lld ",tmp);
        
    }
    return 0;
}