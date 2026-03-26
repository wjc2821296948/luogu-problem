#include <bits/stdc++.h>
using namespace std;
int cnt[10000005],a[5000005];
int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		scanf("%d",a + i);
		cnt[a[i]]++;
	}for(int i = 1;i <= 10000000;i++){
		for(int j = 1;j <= cnt[i];j++){
			cout << i << '\n';
		}
	}
	return 0;
}
