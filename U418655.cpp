#include <bits/stdc++.h>
using namespace std;
char s[505];
char p[505][30];
int main(){
	int n,m,k,x; cin >> n >> m >> k >> x;
	cin >> s + 1;
	for (int i = 1;i <= m;i++){
		cin >> p[i];
		sort(p[i],p[i] + k);
	}
	x--;
	for (int i = n;i >= 1;i--){
		if (s[i] == '#'){
			int cur = x % k;
			s[i] = p[m][cur];
			x /= k;
			m--;
		}
	}
	cout << s + 1;
	return 0;
}

