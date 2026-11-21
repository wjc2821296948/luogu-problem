#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
const int maxn = 1e6 + 100;
struct str{
    ll l,r;
}a[maxn];
ll maxdeep = 0;

void dfs(ll x,ll deep){// no father
    if(a[x].l != 0){
        dfs(a[x].l,deep + 1);
    }
    if(a[x].r != 0){
        dfs(a[x].r,deep + 1);
    }
    maxdeep = max(maxdeep,deep);
}
int main(){
    scanf("%lld",&n);
    for(int i = 1; i <= n; i++){
        scanf("%lld %lld",&a[i].l,&a[i].r);
    }
    dfs(1,1);
    printf("%lld",maxdeep);
    return 0;
}