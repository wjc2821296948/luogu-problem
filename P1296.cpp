#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e6 + 100;
ll n,q,ans;
ll a[maxn];
// int search(ll l,ll r,ll key){
//     while (l <= r) {
//         ll mid = (r + l) / 2;
//         if (a[mid] < key) {
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//     return l;
// }
int search(int l, int r, int key) {
	while(l <= r) {
		int mid = (l + r) / 2;
		if(a[mid] <= key) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return r;
}
int main(){
    // freopen("P1296_1.in","r",stdin);
    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    sort(a + 1,a + n + 1);
    // for(int i = 2;i <= n;){
    //     if(a[i] - tmp <= q){//16 - 12
    //         ans++;
    //         i++;
    //     }else{//i = 4,ing = 2,tmp = 10
    //         tmp = a[ing];//tmp = 12
    //         ing++;//ing = 3
    //         i = ing;//
    //         continue;  
    //     }//tmp = 12,ing = 3,i = 2
    // }
    for(int i = 1;i <= n;i++){
        ll tmp = search(i,n,a[i] + q);
        ans += tmp - i;
        // printf("tmp-%d %d\n",i,tmp);
        // if(a[search(1,n,a[i])] - a[i] <= q){

        // }else{
            
        // }
    }
    printf("%lld",ans);
    return 0;
}