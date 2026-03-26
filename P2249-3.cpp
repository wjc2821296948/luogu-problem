#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 8;

int a[maxn];

int search1(int l,int r,int key){
    while(l <= r){
        int mid = (l + r) / 2;
        if(key <= a[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return l;
}
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        int key;
        scanf("%d",&key);
        int tmp = search1(1,n,key);
        if(a[tmp] == key){
            printf("%d ",tmp);
        }else{
            printf("-1 ");
        }
    }
    return 0;
}