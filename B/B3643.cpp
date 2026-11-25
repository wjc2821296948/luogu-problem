#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,m;
const int maxn = 1e5 + 1000;
vector<ll> a[maxn];

int main() {
    scanf("%lld %lld",&n,&m);
    for(int i = 1;i <= m;i++){
        ll u,v;
        scanf("%lld %lld",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // 邻接矩阵out
    for(int i = 1;i <= n;i++){
        sort(a[i].begin(),a[i].end());
        for(int j = 1;j <= n;j++){
            bool flag = false;
            for(int k = 0;k < a[i].size();k++){
                if(a[i][k] == j){
                    printf("1 ");
                    flag = true;
                    break;
                }
            }
            if(!flag){
                printf("0 ");
            }
        }
        printf("\n");
    }
    // vector - out
    for(int i = 1;i <= n;i++){
        ll size = a[i].size();
        printf("%lld ",size);
        for(int j = 0;j < size;j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}