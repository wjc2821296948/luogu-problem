#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
const int maxn = 1e5 + 1000;
int n,q;
int a[maxn];
struct str
{
    /* data */
    int a,b,c;
}add[maxn];

signed main() {
    scanf("%lld %lld",&n,&q);
    
    for(int i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
        if(a[i] == 1){
            add[i].a = add[i - 1].a + 1;
            add[i].b = add[i - 1].b;
            add[i].c = add[i - 1].c;
        }if(a[i] == 2){
            add[i].a = add[i - 1].a;
            add[i].b = add[i - 1].b + 1;
            add[i].c = add[i - 1].c;
        }if(a[i] == 3){
            add[i].a = add[i - 1].a;
            add[i].b = add[i - 1].b;
            add[i].c = add[i - 1].c + 1;
        }
    }
    for(int i = 1;i <= q;i++){
        ll tmp1,tmp2;
        scanf("%lld %lld",&tmp1,&tmp2);
        tmp1--;
        printf("%lld %lld %lld\n",add[tmp2].a - add[tmp1].a,add[tmp2].b - add[tmp1].b,add[tmp2].c - add[tmp1].c);
        // printf("%lld %lld %lld\n",add[tmp2].a - add[tmp1 - 1].a,add[tmp2].b - add[tmp1 - 1].b,add[tmp2].c - add[tmp1 - 1].c);
    }
	return 0;
}