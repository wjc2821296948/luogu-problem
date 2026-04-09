#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int maxn = 1008;
ll mp[maxn][maxn],s[maxn][maxn];
ll n,m,len;
signed main(){
    scanf("%lld %lld %lld",&n,&m,&len);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            scanf("%lld",&mp[i][j]);
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + mp[i][j];
        }
    }
    // printf("%lld",LONG_LONG_MIN);
    ll a,b;
    ll tmp = -1e18;
    for(int x1 = 1,x2 = x1 + len - 1;x2 <= n;x1++,x2++){
        for(int y1 = 1,y2 = y1 + len - 1;y2 <= m;y1++,y2++){
            // ll sum = 0;
            // for(int i = x1;i <= x2;i++){
            //     for(int j = y1;j <= y2;j++){
            //         sum += mp[i][j];
            //     }
            // }
            ll sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
            if(tmp < sum){
                tmp = sum;
                a = x1;
                b = y1;
            }
        }
    }
    printf("%lld %lld",a,b);
    return 0;
}