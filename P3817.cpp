#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
ll x;
const int maxn = 1e5 + 1000;
ll a[maxn];
ll ans = 0;

int main(){
    scanf("%lld %lld",&n,&x);
    for(int i = 1;i <= n;i++){ 
        scanf("%lld",&a[i]);
    }
    sort(a + 1,a + n + 1);
    for(int i = 1;i < n;i++){
        if(a[i] + a[i + 1] > x){
            ll tmp = a[i] + a[i + 1] - x;
            ans += tmp;
            if (a[i + 1] >= tmp) {
                a[i + 1] -= tmp;
                ans += tmp;
            } else {
                ans += tmp;
                a[i + 1] = 0;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}