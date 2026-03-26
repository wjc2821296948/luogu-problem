#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e6 + 100;
ll n,k;

struct str
{
    ll id,h,w;
    /* data */
}a[maxn];

bool check(int ing){
    int people = 0;
    for(int i = 1;i <= n;i++){
        int tmp1 = a[i].h / ing;
        int tmp2 = a[i].w / ing;
        people += tmp1 * tmp2;
    }
    if(people >= k){
        return true;
    }else{
        return false;
    }
}
int search(int l, int r) {
	while(l <= r) {
		int mid = (l + r) / 2;
		if(check(mid)) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}   
	}
	return r;
}
bool cmp1(str x,str y){
    return x.h > y.h;
}
bool cmp2(str x,str y){
    return x.w > y.w;
}
int main(){
    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i++){
        scanf("%d %d",&a[i].h,&a[i].w);
    }
    
    sort(a + 1,a + n + 1,cmp1);
    ll tmp = a[1].h;
    sort(a + 1,a + n + 1,cmp2);
    tmp = max(tmp,a[1].w);
    printf("%d",search(1,tmp));
    return 0;
}