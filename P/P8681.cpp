#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll n;
const int maxn = 1e5 + 1000;
ll a[maxn];
ll s[maxn];
void dfs(int p,int d){
    s[d] += a[p];
    if(2 * p + 1 > n){
        return;
    }
    dfs(2 * p,d + 1);
    dfs(2 * p + 1,d + 1);
}
int main(){
    scanf("%lld",&n);
    for(int i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
    }
    dfs(1,1);
    ll mmax = -999999,flag = 0;
    for(int i = 1;i <= n;i++){
        if(mmax < s[i]){
            flag = i;
            mmax = s[i];
        }
    }
    printf("%lld",flag);
    return 0;
}
