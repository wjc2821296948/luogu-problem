#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
const int maxn = 1e6 + 1000;
int ans = 0;

struct str
{
    ll start,end;
    /* data */
}a[maxn];
bool cmp(const str x,const str y){
    return x.end < y.end;
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d %d",&a[i].start,&a[i].end);
    }
    int ing = -1;
    sort(a + 1,a + n + 1,cmp);
    for(int i = 1;i <= n ;i++){
        if(ing <= a[i].start){
            ing = a[i].end;
            ans++;
        }else{
            continue;
        }
    }
    printf("%d",ans);
    return 0;
}