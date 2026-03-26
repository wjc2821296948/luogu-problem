#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e6 + 100;
ll n,q;
ll b[maxn];
struct str
{
    ll id,many;
    /* data */
}a[maxn];

int search(int l, int r, int key) {
	while(l <= r) {
		int mid = (l + r) / 2;
		if(a[mid].many < key) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return l;
}
bool cmp(str x,str y){
    return x.many < y.many;
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i].many);
        a[i].id = i;
    }
    scanf("%d",&q);
    for(int i = 1;i <= q;i++){
        scanf("%lld",&b[i]);
    }
    sort(a + 1,a + n + 1,cmp);
    for(int i = 1;i <= q;i++){
        ll tmp = search(1,n,b[i]);
        if(a[tmp].many == b[i]){ 
            printf("%lld\n",a[tmp].id);
        }else{
            printf("0\n");
        }
        
    }
    // printf("%lld",ans);
    
    return 0;
}