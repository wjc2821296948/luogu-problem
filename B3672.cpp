#include <bits/stdc++.h>
using namespace std;
int m[]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
int n, q, sum = 0;
int a[1010];
int main() {
    cin >> n >> q;
    for (int i = 1;i <= n;i++){
    	cin >> a[i];
	}
	while(q--){
		int len,x;
		cin >> len >> x;
		for (int i = 1;i <= n;i++){
			if (a[i] % m[len] == x){
				sum++;
			}
		}
   		cout << sum << endl;
   		sum = 0;
	}
    return 0;
}
