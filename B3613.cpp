#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t;
const int maxn = 1e6;
vector<ll> a[maxn];
void work(){
    ll n,m;
    scanf("%lld %lld",&n,&m);
    for(int i = 1;i <= m;i++){
        ll u,v;
        scanf("%lld %lld",&u,&v);
        a[u].push_back(v);
    }
    for(int i = 1;i <= n;i++){
        sort(a[i].begin(),a[i].end());
        for(int j = 0;j < a[i].size();j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
        a[i].clear();
    }

}
int main(){
    scanf("%lld",&t);
    for(int i = 1;i <= t;i++){
        work();
    }
    return 0;
}   