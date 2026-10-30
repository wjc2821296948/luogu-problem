#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,m;
const int maxn = 1e2 + 10;
int a[maxn];
int ansr;
int search(int l,int r,int key){
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] > key){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        } 
    }
    return l;
}
bool cmp(int a,int b){
    return a > b;
}
int main(){
    scanf("%lld%lld",&n,&m);
    int tmp = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            scanf("%d",&a[tmp]);
            tmp++;
        }
    }
    ansr = a[1];
    sort(a + 1,a + 1 + n * m,cmp);
    int flag = search(1,n * m,ansr);
    int ansc = (flag - 1) / n + 1;
    int ansr = (flag - 1) % n + 1;
    if (ansc % 2 == 0){
        ansr = n - ansr + 1;
    }
    printf("%d %d",ansc,ansr);
    // if(wn % 2 == 0){
    //     printf("%d %d",n - wm,wn);
    // }else{
    //     printf("%d %d",wm,wn);
    // }
    return 0;
}