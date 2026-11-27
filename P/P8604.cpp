#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,m;
const int maxn = 1010;
vector<ll> a[maxn];
bool flag[maxn];
ll lastu,lastv;
bool found = false;
ll ans = 0;

bool dfs(ll id,ll ban){
    if(id == lastv){
        // ans = min(ans,cnt + id);
        // found = true;
        return true;
    }
    flag[id] = true;
    for(int i = 0;i < a[id].size();i++){
        if(flag[a[id][i]] || a[id][i] == ban){
            continue;
        }
        // cnt += abs(cnt - id);
        if(dfs(a[id][i],ban)){
            return true;
        }
    }
    return false;
}
int main() {
    scanf("%lld %lld",&n,&m);
    for(int i = 1;i <= m;i++){
        ll u,v;
        scanf("%lld %lld",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }    
    scanf("%lld %lld",&lastu,&lastv);

    if(!dfs(lastu,0)){
        printf("-1");
        return 0;
    }
    // dfs(lastu);
    for(int i = 1;i <= n;i++){
        // a[i].earse()
        // dfs
        // a[i].erase(remove(a[i].begin(),a[i].end(),3),a[i].end());
        if(i == lastu || i == lastv){
            continue;
        }
        memset(flag,false,sizeof(flag));
        if(!dfs(lastu,i)){
            ans++;
        }
    }
    
    printf("%lld",ans);
    return 0;
}