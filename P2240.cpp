#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
double t;
const int maxn = 1e2 + 10;
double ans = 0;

struct str{
    double m,v;
}a[maxn];
bool cmp(const str x,const str y){
    return (x.v / x.m) > (y.v / y.m);
}
int main(){
    scanf("%d %lf",&n,&t);
    for(int i = 1;i <= n;i++){
        scanf("%lf %lf",&a[i].m,&a[i].v);
    }
    sort(a + 1,a + n + 1,cmp);
    int tmp = 1;
    for(int i = 1;i <= n;i++){
        if(t > 0 && t >= a[tmp].m){
            t -= a[tmp].m;
            ans += a[tmp].v;
            tmp++;
        }else if(t > 0){
            ans += a[tmp].v / (a[tmp].m / t);
            break;
        }else{
            break;
        }
    }
    printf("%.2lf",ans);
    return 0;
}