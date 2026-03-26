#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e5 + 100;
ll n,m;
ll a[maxn];

bool check(int last,int tmp){
    int p = 1;
    tmp--;
    for(int i = 2;i <= n;i++){
        if(a[i] - a[p] >= last){
            if(!--tmp){//当tmp - 1为零
                return true;
            }
            p = i;
        }
    }
    return false;
}
int search(int l,int r){
    while(l <= r) {
		int mid = (l + r) / 2;
		if(check(mid,m)) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}   
	}
	return r;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    sort(a + 1,a + n + 1);
    int tmp = search(1,a[n] - a[1]);
    printf("%d",tmp);
    return 0;
}