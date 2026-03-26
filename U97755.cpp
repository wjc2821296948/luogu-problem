#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e6 + 10;
long long a[maxn],Valuorant[maxn];
long long sum[maxn];
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	for (int i = 1;i <= n;i++){
		scanf("%lld",a + i);	
		sum[i] = sum[i - 1] + a[i];
		Valuorant[i] = Valuorant[i - 1] ^ a[i];
	}
	while(m--){
		long long x,y,z;
		scanf("%lld%lld%lld",&x,&y,&z);
		if (x == 1){
			printf("%lld\n",sum[z] - sum [y - 1]);
		}
		else{
			printf("%lld\n",Valuorant[z] ^ Valuorant[y - 1]);
		}
	}
	return 0;
}

