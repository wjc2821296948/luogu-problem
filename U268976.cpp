#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 20;
int a[maxn],b[maxn],n;
int sum = 0,c = 0,d = 0;
int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    while(c < n){
        b[a[c]]++;
        while(b[a[c]] > 1) {
            b[a[d]]--;
            d++;
        }
        sum = max(sum,c - d + 1);
        c++;
    }
    printf("%d",sum);
    return 0;
}
