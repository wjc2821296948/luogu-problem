#include<bits/stdc++.h>
using namespace std;

int n;
int a[1010];
int ans = 0;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 1;i <= n;i++){
		for(int j = 1;j < n - i;j++){
			if(a[j] > a[j + 1]){
				swap(a[j],a[j + 1]);
				ans++;
			}
		}
	}
	
	printf("%d",ans);
	return 0;
}