#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1e6 + 1000;
int a[maxn];
int n;
ll ans = 0;

int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i < n;i++){
        ans += max(a[i],a[i + 1]);
    }
    printf("%lld",ans);
    return 0;
}