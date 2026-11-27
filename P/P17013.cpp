#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n;
const int maxn = 1e5 + 1000;
// vector<ll> a[maxn];
bool flag[maxn];
ll dep[maxn];
ll ans = 0;

struct str
{
    ll l,r;
    /* data */
}a[maxn];

void dfs(ll id){
    // 叶子节点
    if(a[id].l == 0 && a[id].r == 0){
        flag[id] = true;
        dep[id] = 1;
        ans++;
        return;
    }

    // 先处理左右子树
    if(a[id].l) dfs(a[id].l);
    if(a[id].r) dfs(a[id].r);

    // 满二叉树
    if(a[id].l && a[id].r){
        if(flag[a[id].l] && flag[a[id].r] && dep[a[id].l] == dep[a[id].r]){
            flag[id] = true;
            dep[id] = dep[a[id].l] + 1;
            ans++;
        }
    }
}
int main() {
    scanf("%lld",&n);
    for(int i = 1;i <= n;i++){
        // ll u,v;
        scanf("%lld %lld",&a[i].l,&a[i].r);
        // a[u].push_back(v);
        // a[v].push_back(u);
    }
    dfs(1);
    printf("%lld",ans);
    return 0;
}