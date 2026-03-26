#include <bits/stdc++.h>
using namespace std;
int a[10000005],b[10000005],s[35],n;
int main(){
	scanf("%d",&n);
	s[0] = 1;
	for(int i = 1;i <= 30;++i){
		s[i] = s[i - 1] * 2;
	}for(int i = 1;i <= n;++i){
		scanf("%d",a + i);
	}for(int i = 1;i <= n;++i){
		scanf("%d",b + i);
	}for(int i = 1;i <= n;++i){
		printf("%lld\n",1ll * a[i] * s[b[i]]);
	}
	return 0;
}

