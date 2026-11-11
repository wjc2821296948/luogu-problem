#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll h,w;
const int maxn = 110;
char a[maxn][maxn];
int main(){
    ll x1,x2,y1,y2;
    scanf("%lld %lld",&h,&w);
    scanf("%lld %lld %lld %lld",&x1,&x2,&y1,&y2);
    for(ll i = 1;i <= h;i++){
        for(ll j = 1;j <= w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(ll i = x1;i <= x2;i++){
        for(ll j = y1;j <= y2;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    // printf("%c",a[3][3]);
    return 0;
}