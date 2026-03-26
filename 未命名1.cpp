#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define end return 0
#define wifi no_money_wifi
#define redian flash_point

int a[100000001];
long long cgnb;
int ans,sum;

int main(){
	scanf("%d",&cgnb);
	
	int tmp = 1;
	
	while(cgnb){
		ans++;
		int cgyyds = cgnb % 3;
		if(cgyyds == 1 && tmp == 1){
			sum = ans;
			tmp = 0;
		}if(cgyyds == 0){
			cgnb = cgnb - cgnb / 3;
		}else{
			cgnb = cgnb - cgnb / 3 - 1;
		}
	}
	printf("%d %d",ans,sum);
}
