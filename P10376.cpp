#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
const int mod = 1e9 + 7;
int n, a, b, c;
int dp[maxn];
int f(int i) {
	if(i < c + 1){
		return 1;
	} 
	if(dp[i] != 0){
		return dp[i	];
	} 
 	dp[i] = (f(i - a) + f(i - b)) % mod;
	return dp[i];
}
int main() {
	cin >> n >> a >> b >> c;
	cout << f(n);
    return 0;
}
