#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 40;
ll d[maxn] = {0,990,1010,1970,2030,2940,3060,3930,4060,4970,5030,5990,6010,7000};
ll f[maxn];
ll a,b,n;
int main(){
    scanf("%lld %lld %lld",&a,&b,&n);
    n += 13;
    for(ll i = 14;i <= n;i++){
        scanf("%lld",&d[i]);
    }
    sort(d + 1,d + n + 1);
    f[0] = 1;
    for(ll i = 1;i <= n;i++){
        for(ll j = 0;j < i;j++){
            if(a <= d[i] - d[j] && d[i] - d[j] <= b){
                f[i] += f[j];
            }
        }
    }
    printf("%lld",f[n]); 
    return 0;
}