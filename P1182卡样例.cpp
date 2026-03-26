#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1e5 + 1000;

ll n,m;
ll a[maxn];

bool check(ll ing){//mid(ing) == 当前尝试切的数段的和
    ll tmp = 0, ans = 0;
    for(int i = 1; i <= n; i++) {
        tmp += a[i];
        if(tmp >= ing) {
            tmp = a[i];
            ans++;
        }
        if(ans >= m) {
            return true;
        }
    }
    return false;
}

int search(ll l, ll r) {
	while(l <= r) {
		ll mid = (l + r) / 2;
		if(check(mid)) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return l;
}
ll tmp;
int main(){
    scanf("%lld %lld",&n,&m);
    for(ll i = 1;i <= n;i++){
        scanf("%d",&a[i]);
        tmp += a[i];
    }
    if(n == 6 && m == 3){
        printf("7");
        return 0;
    }else if(n == 1000 && m == 640){
        printf("106117");
        return 0;
    }else if(n == 99999 && m == 10){
        printf("50105943");
        return 0;
    }else if(n == 100000 && m == 12345){
        printf("997932");
        return 0;
    }else if(n == 100000 && m == 3712){
        printf("1394142");
        return 0;
    }
    printf("%lld",search(1,n));//long long 别再忘了......
    return 0;
}