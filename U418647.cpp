#include <bits/stdc++.h>
using namespace std;
int n,m,a[1005];
int main() {
	cin >> n >> m;
	for (int i = 1;i <= n;i++) a[i] = i;
	int len = n, cur_pos = 1;
	for (int i = 1;i <= m;i++){
		cur_pos += i * i * i % 5 + 1;
		if (cur_pos > len) cur_pos = 1 + i * i * i % 5 + 1;
		if (i == m){
			cout << a[cur_pos];
			break;
		}
		for (int i = cur_pos + 1;i <= len;i++) a[i - 1] = a[i];
		len--; 
	}
	return 0;
}
