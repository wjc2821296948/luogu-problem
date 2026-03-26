#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e6 + 8;

long long school[maxn],student[maxn],ans = 0;

ll search1(ll l,ll r,ll key){
    while(l <= r){
        ll mid = (l + r) / 2;
        if(key <= school[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return key - school[l];
}
ll search2(ll l,ll r,ll key){
    while(l <= r){
        ll mid = (l + r) / 2;
        if(key < school[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return key - school[r];
}
ll n,m;
int main(){
    // freopen("P1678_1.in", "r", stdin);
    scanf("%lld %lld",&m,&n);
    for(ll i = 1;i <= m;i++){
        scanf("%lld",&school[i]);
    }
    for(ll i = 1;i <= n;i++){
        scanf("%lld",&student[i]);
    }

    // while(m--){
    //     int key;
    //     scanf("%lld",&key);
    //     int tmp = search2(1,n,key);
    //     if(a[tmp] == key){
    //         printf("%lld ",tmp);
    //     }else{
    //         printf("-1 ");
    //     }
    // }
    sort(school + 1,school + m + 1);
    /*
    for(int i = 1;i <= n;i++){
        int min = 9999999;
        for(int j = 1;j <= m;j++){
            int tmp = student[i] - school[j];
            if(tmp < 0){
                tmp -= tmp * 2;
            }
            if(tmp < min){
                min = tmp;
            }
        }
        ans += min;
    }
    */
    for(ll i = 1;i <= n;i++){
        if(student[i] <= school[1]){
            ans += school[1] - student[i];
        }else{
            ll tmp1 = abs(search1(1,m,student[i]));
            ll tmp2 = abs(search2(1,m,student[i]));
            ans += min(tmp1,tmp2);
        }
    }
    printf("%lld",ans);
    return 0;
}