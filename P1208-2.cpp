#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,m;
int ans;
struct str
{
    int money,many;
    /* data */
}a[6000];
bool cmp(str x,str y){
    if(x.money != y.money){
        return x.money < y.money;
    }else{
        return x.many > y.many;
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= m;i++){
        scanf("%d %d",&a[i].money,&a[i].many);
    }
    sort(a + 1,a + m + 1,cmp);
    for (int i = 1;n >= 1;i++){
        if(n >= a[i].many){
            n -= a[i].many;
            ans += a[i].money * a[i].many;
        }else{
            ans += a[i].money * n;
            break;
        }
        /* code */
    }
    
    printf("%d",ans);
    return 0;
}