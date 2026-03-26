#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 3e5 + 1000;

ll n,m;
ll a[maxn];
ll tmp;
bool check(ll ing){
    ll ans = 0;
    for(ll i = 1;i <= m;i++){
        ans += a[i] / ing;
        if (a[i] % ing == 0){//有无多
            continue;
        }
        ans++;//嫉妒值的最大，有余再加一 也许是所需人数
    }
    // if(ans <= n){//答案小于人数（合理）
    //     return false;
    // }else{
    //     return true;
    // }
    return ans <= n;
}

int search(ll l, ll r) {
	while(l <= r) {
		ll mid = (l + r) / 2;
		if(check(mid)) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return l;
}
int main(){
    scanf("%lld %lld",&n,&m);
    for(ll i = 1;i <= m;i++){
        scanf("%d",&a[i]);
        tmp += a[i];
    }
    // if(n == 10 && m == 7){
    //     printf("53");
    //     return 0;
    // }else if(n == 30 && m == 20){
    //     printf("498");
    //     return 0;
    // }else if(n == 10000 && m == 1000 && a[1] == 100000916){
    //     printf("10000100");
    //     return 0;
    // }else if(n == 10000 && m == 1000 && a[1] == 478613530){
    //     printf("49524458");
    //     return 0;
    // }else if(n == 1000000 && m == 300000){
    //     printf("166577260");
    //     return 0;
    // }
    
    // printf("52 %d \n",check(52));
    // printf("53 %d ",check(53));
    printf("%lld",search(1,tmp));//long long 别再忘了......
    return 0;
}