#include <bits/stdc++.h>
using namespace std;
long long n,a[300005],s;
double maxn;
int main(){
	cin >> n; 
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}sort(a + 1,a + 1 + n);
	for (int i = n;i >= 1;i--){
		s += a[i]; 
		maxn = max(maxn,s * 1.00 / (n - i + 1) * s);
	}
	printf("%lf",maxn);
	return 0;
}
