#include<bits/stdc++.h>
using namespace std;
long long a,b;
long long sum = 1;
const int maxn = 1e9; 
int main(){
	scanf("%d %d",&a,&b);
	if(a == 1){
		printf("1");
		return 0;
	}
	for(int i = 1;i <= b;i++){
		sum = sum * a;
		if(maxn < sum){ 
			printf("-1");
			return 0;
		}
	}
	printf("%lld",sum);
	return 0;
}
