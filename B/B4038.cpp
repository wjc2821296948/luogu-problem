#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e5 + 1000;
int a[maxn];
int t;
int sum[maxn];
signed main() {
    scanf("%lld",&t);
    for(int i = 1;i <= t;i++){
        int n;
        scanf("%lld",&n);
        for(int j = 1;j <= n;j++){
            scanf("%lld",&a[j]);
            sum[j] = sum[j - 1] + a[j];
        }
        bool tf = false;
        for(int j = 1;j <= n;j++){
            if(sum[n] - sum[j] == sum[j]){
				tf = true;
				break;
			}
        }
        if(tf){
            printf("Yes\n");
        }else{
            printf("No\n");
        } 
    }
	return 0;
}