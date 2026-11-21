#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
const int maxn = 1e6 + 100;
struct str
{
    ll l,r;
    /* data */
}a[maxn];


void first(ll x,ll y,ll v){
    printf("%lld ",v);
    if(x != 0){
        first(a[x].l,a[x].r,x);
    }
    if(y != 0){
        first(a[y].l,a[y].r,y);
    }
}

void mid(ll x,ll y,ll v){
    if(x != 0){
        mid(a[x].l,a[x].r,x);
    }
    printf("%lld ",v);
    if(y != 0){
        mid(a[y].l,a[y].r,y);
    }
}

void end(ll x,ll y,ll v){
    if(x != 0){
        end(a[x].l,a[x].r,x);
    }
    if(y != 0){
        end(a[y].l,a[y].r,y);
    }
    printf("%lld ",v);
}

int main(){
    scanf("%lld",&n);
    for(int i = 1; i <= n; i++){
        scanf("%lld %lld",&a[i].l,&a[i].r);
    }
    first(a[1].l,a[1].r,1);
    printf("\n");
    mid(a[1].l,a[1].r,1);
    printf("\n");
    end(a[1].l,a[1].r,1);
    return 0;
}