#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int maxn = 1024;
const int mod = 100003;
bool mp[maxn][maxn];
ll f[maxn][maxn];
ll n,m;
signed main(){
    scanf("%lld %lld",&n,&m);
    while(m--){
        ll x,y;
        scanf("%lld %lld",&x,&y);
        mp[x][y] = true;
    }
    f[1][1] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(f[i][j] == 1){
                continue;
            }
            if(!mp[i][j]){
                f[i][j] = (f[i - 1][j] + f[i][j - 1]) % mod;
            }
        }
    }
    printf("%lld",f[n][n]);
    return 0;
}