#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1e4 + 100;
struct str{
    int id,t;
}a[maxn];
bool cmp(str x,str y){
    if(x.t != y.t){
        return x.t < y.t;
    }else{
        return x.id < y.id;
    }
}
int n;
ll ans = 0,tmp = 0;

int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i].t);
        a[i].id = i;
    }
    sort(a + 1, a + n + 1,cmp);
    
    for(int i = 1;i <= n;i++){
        printf("%d ",a[i].id);
        ans += tmp;
        tmp += a[i].t;
    }
    printf("\n%.2lf",1.0 * ans / n);
    return 0;
}