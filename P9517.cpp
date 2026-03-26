#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],b,c;
int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		if(a[i] == 1){
			c = i;
		}
	}
	for(int i = 1;i <= n;i++){
		if(a[i] == 1){
			b = i;
			break;
		}
	}	
	if(b == 0 && c == 0){
		printf("0");
	}
	else{
		printf("%d",c - b + 1);
	}
	return 0;
}
