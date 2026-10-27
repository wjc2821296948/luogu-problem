#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1') {
			ans++;
		}
	}
    printf("%d\n", ans);
	return 0;
}
