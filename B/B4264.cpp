#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int maxn = 600;
ll a[maxn][maxn];
ll ans = 0;
int main(){
    scanf("%lld %lld",&n,&m);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(int i = 1;i <= n - 1;i++){
        for(int j = 1;j <= m - 1;j++){
            if(a[i][j] * a[i + 1][j + 1] == a[i][j + 1] * a[i + 1][j]){
                ans++;
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}