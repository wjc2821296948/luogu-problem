#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
const int maxn = 1e6;
vector<ll> a[maxn];
ll ans[maxn];

int dfs(int x,int father){
    ans[x] = 1;
    for(int i = 0; i < a[x].size(); i++){
        if(a[x][i] != father){
            ans[x] += dfs(a[x][i],x);
        }
    }
    
    return ans[x];
}
int main(){
    scanf("%lld",&n);
    for(int i = 1; i < n; i++){
        ll x,y;
        scanf("%lld%lld",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,0);
    for(int i = 1; i <= n; i++){
        printf("%lld ",ans[i]);
    }
    return 0;
}