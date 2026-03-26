#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,l;
int ans = 0;

const int maxn = 1e4 + 100;

struct str
{
    ll s,e;
    /* data */
}a[maxn];
int put(int x,int l){
    if(x % l == 0){
        return x / l;
    }else{
        return int(x / l) + 1;
    }
}
bool cmp(const str x,const str y){
    return x.e < y.e;
}
int main(){
    scanf("%d %d",&n,&l);
    for(int i = 1;i <= n ;i++){
        scanf("%d %d",&a[i].s,&a[i].e);
    }
    sort(a + 1,a + n + 1,cmp);
    int ing = a[1].s;
    
    for(int i = 1;i <= n ;i++){
        if(ing <= a[i].s){
            int tmp = put(a[i].e - a[i].s,l);
            ing = a[i].s + (tmp * l);
            ans += tmp;
        }else if(ing <= a[i].e){
            int tmp = put(a[i].e - ing,l);
            ing += tmp * l;
            ans += tmp;
        }else{//ing > a[i]的后端点
            continue;
        }
    }
    printf("%d",ans);
    return 0;
}