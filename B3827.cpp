#include<bits/stdc++.h>
using namespace std;
long long n,k,a;
struct wjc{
	int num,m;
	double aa;
}x[101];
bool cmp(wjc o,wjc p){
	if(p.aa != o.aa){
		return o.aa > p.aa;
	}
	return o.aa < p.aa;
} 
int main(){
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= k;j++){
			cin >> a,x[i].m += a;
		}
		x[i].num = i,x[i].aa = 1.0 * x[i].m / k;
	} 
	sort(x + 1,x + n + 1,cmp);
	cout << x[1].num << '\n' << x[2].num;
	return 0;
}
