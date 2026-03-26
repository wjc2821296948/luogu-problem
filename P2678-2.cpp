#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxn = 5e4 + 100;

ll n,l,m;
ll a[maxn];

bool check(ll jump){
    ll tmp = 0,ing = 0;
    for(ll i = 1;i <= n + 1;i++){
        if(a[i] - a[ing] < jump){
            tmp++;
        }else{
            ing = i;
        }
    }
    return tmp <= m;
}
int search(ll l, ll r) {
	while(l <= r) {//mid == min jump
		ll mid = (l + r) / 2;
		if(check(mid)){
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return r;
}
ll tmp,ans;
int main(){
    scanf("%lld %lld %lld",&l,&n,&m);
    for(ll i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
        tmp += a[i];
    }
    a[n + 1] = l;
    tmp += l;
    printf("%lld",search(1,tmp));//long long 别再忘了......
    return 0;
}