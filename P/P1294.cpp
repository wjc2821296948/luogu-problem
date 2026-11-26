#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,m;
// vector<ll> a[60];
ll ans = 0;
bool visited[30];
vector<pair<ll,ll>> a[30];


// struct str
// {
//     ll u,v,value;
//     /* data */
// }a[60];
// // 双向图

// bool cmp(str x,str y){
//     return x.u < y.u;
// }
// ll dfs(ll id){
//     if(!visited[id]){
//         return a[id].value;
//     } 
//     ll cnt = 0;
//     for(int i = 1;i <= m;i++){
//         if(a[i].u == a[id].v){
//             ll tmp = 0;
//             tmp += dfs(i);
//         }
//     }
//     return cnt;
// }
void dfs(ll id,ll cnt){
    ans = max(ans,cnt);
    visited[id] = true; 
    for(int i = 0;i < a[id].size();i++){
        ll tmp = a[id][i].first;
        ll v = a[id][i].second;
        if(!visited[tmp]){
            dfs(tmp,cnt + v);
        }
    }
    visited[id] = false;
}
int main() {
    scanf("%lld %lld",&n,&m);
    for(int i = 1;i <= m;i++){
        ll u,v,value;
        scanf("%lld %lld %lld",&u,&v,&value);
        // a[u].near.push_back()
        a[u].push_back({v,value});
        a[v].push_back({u,value});
    }   
    // sort(a + 1,a + m + 1,cmp);
    // 任意in，任意out
    // dfs(1,a[1].value);
    for(int i = 1;i <= n;i++){
        dfs(i,0);
    }
    printf("%lld",ans);
    return 0;
}