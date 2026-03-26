#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;
long long a[maxn];
long long sum = -26010000;
long long n;
int main(){
	cin >> n;	
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	for(int i = 1;i <= n - 1;i++){
		if(sum < a[i] - a[i + 1]){
			sum = a[i] - a[i + 1];
		}
	}
	cout << sum;
	return 0;
}

