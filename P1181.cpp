#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pr printf

const int maxn = 1e5 + 1000;
int n,m;
int a[maxn];

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    int ans = 1;//重1开始，第一段要算进去
    int tmp = 0;
    for(int i = 1;i <= n;i++){
        if(tmp + a[i] <= m){
            tmp += a[i];
        }else{
            ans++;
            tmp = a[i];
        }
    }
    printf("%d",ans);
    return 0;
}