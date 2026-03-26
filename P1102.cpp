#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 1000;

int a[maxn];
int n,c;
long long ans = 0;

int search1(int z,int y,int sum){
    for(;z <= y;){
        int tmp = (z + y) / 2;
        if(sum <= a[tmp]){
            y = tmp - 1;
        }else{
            z = tmp + 1;
        }
    }
    return z;
}
int search2(int z,int y,int sum){
    for(;z <= y;){
        int tmp = (z + y) / 2;
        if(sum > a[tmp]){
            z = tmp + 1;
        }else if(sum == a[tmp]){
            z = tmp + 1;
        }
        else{
            y = tmp - 1;
        }
    }
    return y;
}

int main(){
    scanf("%d %d",&n,&c);
    for (int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    sort(a + 1,a + n + 1);
    for (int i = 1;i <= n;i++){
        ans += search2(1,n,a[i] - c) - search1(1,n,a[i] - c) + 1;
    }
    printf("%lld",ans);
    return 0;
}