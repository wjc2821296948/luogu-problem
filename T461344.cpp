#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 50;
char a[maxn];
int ans;
int main(){
	cin >> a;
	for(int i = 0;i < strlen(a);i++){ 
		if(a[i] < 'A'){
			ans = ans + ('A' - a[i]);
		}else if('Z' < a[i]){
			ans = ans + (a[i] - 'Z');
		}
	}
	printf("%d\n",ans);
	return 0;
}
