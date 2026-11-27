#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n;
const int maxn = 1e6 + 100;
vector<ll> a[maxn];
ll flag[maxn];

void bfs(ll value){
    queue<ll> q;
    q.push(value);
    flag[value] = true;

    while (!q.empty())
    {
        ll now = q.front();
        q.pop();
        // flag[now] = true;
        for(int i = 0;i < a[now].size();i++){
            // flag[a[now][i]] = true; 
            if(!flag[a[now][i]]){
                q.push(a[now][i]);
                printf("%lld ",a[now][i]);
                flag[a[now][i]] = true;
            }
        }
        /* code */
    }
    
}
int main() {
    scanf("%lld",&n);
    for(int i = 1;i < n;i++){// n - 1
        ll u,v;
        scanf("%lld %lld",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 0;i <= n;i++){
        sort(a[i].begin(),a[i].end());
    }
    printf("1 ");
    bfs(1);
    return 0;
}