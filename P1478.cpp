#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,chair,s,b,ans;
struct str
{
    int x,y;
    /* data */
}a[10000];
bool cmp(str x,str y){
    return x.y < y.y;
}
int main(){
    scanf("%d %d",&n,&s);
    scanf("%d %d",&chair,&b);
    for(int i = 1;i <= n;i++){
        scanf("%d %d",&a[i].x,&a[i].y);
    }
    sort(a + 1,a + n + 1,cmp);
    for(int i = 1;i <= n;i++){
        if(a[i].x <= chair + b && a[i].y <= s){
            ans++;
            s -= a[i].y;
		}
    }
    printf("%lld",ans);
    return 0;
}