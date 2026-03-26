#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 5e5 + 1000;

ll n,a,b;
ll clothes[maxn];

bool check(ll t){
    ll want = 0;
    for(int i = 1; i <= n; i++){
        if(clothes[i] > a * t){
            want += ceil(1.0 * (clothes[i] - a * t) / b);
        }
    }
    return want <= t;
}

int search(ll l, ll r) {
	while(l <= r) {
		ll mid = (l + r) / 2;
		if(check(mid)) {//true --- time ok; false -- time bad;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return l;
}
ll tmp;
int main(){
    scanf("%lld %lld %lld",&n,&a,&b);
    for(ll i = 1;i <= n;i++){
        scanf("%lld",&clothes[i]);
        tmp += clothes[i];
    }
    printf("%lld",search(1,tmp));//long long 别再忘了......
    return 0;
}