#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
const int maxn = 1e6;
vector<ll> a[maxn];

void dfs(ll value,ll father){
    printf("%lld ",value);
    for(ll i = 0;i < a[value].size();i++){
        if(a[value][i] != father){
            dfs(a[value][i],value);
        }
    }
}

int main(){
    scanf("%lld",&n);
    for(ll i = 1; i < n;i++){
        ll x,y;
        scanf("%lld %lld",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(ll i = 0;i < n;i++){
        sort(a[i].begin(),a[i].end());
    }
    dfs(1,1);
    return 0;
}