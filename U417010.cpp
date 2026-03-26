#include <bits/stdc++.h>
using namespace std;
int n,t,sum = 0,l;
const int maxn = 1e5 + 10;
int a[maxn];
void wjc(){
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++){
		if (l == 1){
			if (a[i] % 2 == 0){
				sum++;
			}
			else{
				l = 0;
			}
		}
		if (a[i] % 2 == 0){
			l = 1;
		}
	}printf("%d\n",sum);
	if (t != 0){
		t--;
		wjc();
	}
}
int main(){
	cin >> t;
	cin >> n;
	wjc();
	return 0;
}

