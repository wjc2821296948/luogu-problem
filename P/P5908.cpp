#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,d;
const int maxn = 1e5 + 100;
vector<ll> a[maxn];
ll ans = 0;

void dfs(ll x,ll father,ll dep){
    
    for(ll i = 0;i < a[x].size();i++){
        if(a[x][i] != father && dep + 1 <= d){
            ans++;
            dfs(a[x][i],x,dep + 1);
        }
    }
}
int main(){
    scanf("%lld %lld",&n,&d);
    for(ll i = 1;i < n;i++){
        ll x,y;
        scanf("%lld %lld",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    // for(ll i = 1;i < n;i++){
    //     sort(a[i].begin(),a[i].end());
    // }
    
    dfs(1,0,0);
    printf("%lld",ans);

    return 0;
}