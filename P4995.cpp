#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,a[310];
ll ans;
int ing;
bool cmp(int x,int y){
    return x > y;
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    sort(a + 1,a + n + 1,cmp);
    ll left = 1,right = n;
    while (left <= right){
        ans += a[left] * a[left] + ing * ing - 2 * a[left] * ing;
        ing = a[left];
        if(left >= right){
            break;
        }
        left++;
        ans += a[right] * a[right] + ing * ing - 2 * a[right] * ing;
        ing = a[right];
        right--;
        /* code */
    }
    
    printf("%lld",ans);
    return 0;
}