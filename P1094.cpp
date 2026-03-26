#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,w;
const int maxn = 1e5 + 100;
int a[maxn];
int ans;

int main(){
    scanf("%d",&w);
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    sort(a + 1,a + n + 1);
    int left = 1,right = n;
    while(left <= right){
        if (a[left] + a[right] <= w) {
            ans++;
            left++;
            right--;
        }else{
            ans++;
            right--;
        }
    }
    printf("%d",ans);
    return 0;
}