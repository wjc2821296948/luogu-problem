#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,m;
const int maxn = 1e6 + 1000;
vector<ll> a[maxn];
bool fg[maxn];//for dfs
bool flag[maxn];// for bfs

void dfs(ll value){
    if(!fg[value]){
        printf("%lld ",value);
        fg[value] = true;
    }else{
        return;
    }
    
    for(int i = 0;i < a[value].size();i++){
        dfs(a[value][i]);
    }
}
// void bfs(int value){
//     for(int i = 0;i < a[value].size();i++){
//         ll tmp = a[value][i];
//         if(!flag[tmp]){
//             printf("%lld ",tmp);
//             flag[tmp] = true;
//         }else{
//             continue;
//         }
//     }
//     for(int i = 0;i < a[value].size();i++){
//         bfs(a[value][i]);
//     }
// }
// MLE

void bfs(ll value){
    queue<ll> q;
    q.push(value);
    flag[value] = true;
    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for(ll i = 0;i < a[u].size();i++){
            if(!flag[a[u][i]]){
                flag[a[u][i]] = true;
                printf("%lld ",a[u][i]);
                q.push(a[u][i]);
            }
        }
        /* code */
    }
    
}
int main() {
    scanf("%lld %lld",&n,&m);
    for(int i = 1;i <= m;i++){
        ll u,v;
        scanf("%lld %lld",&u,&v);
        a[u].push_back(v);
    }
    for(int i = 1;i <= n;i++){
        sort(a[i].begin(),a[i].end());
    }
    dfs(1);
    printf("\n1 ");
    // flag[1] = true;
    bfs(1);
    return 0;
}