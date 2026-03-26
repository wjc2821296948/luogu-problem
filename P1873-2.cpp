#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1e6 + 1000;
int n,m,a[maxn];

bool check(int h,int want){
    for(int i = 1;i <= n;i++){
        if(a[i] >= h){
            want -= a[i] - h;
            if(want <= 0){
                return true;
            }
        }
    }
    return false;
}
int search(ll l,ll r){
    while(l <= r){
        ll mid = (l + r) / 2;
        if(check(mid,m)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return r;
}
int r;
int main(){
    scanf("%d %d",&n,&m);
    for (int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
        r = max(r,a[i]);//r为最大一颗树的高度
        /* code */
    }
    printf("%d",search(0,r - 1));//0 - (r-1)
    
    return 0;
}