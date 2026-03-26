#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
int a[50], len;
bool vis[maxn];
void dfs1(int x) {
	if(x > 1e5) return;
	a[++len] = x;
	dfs1(x * 10);
	dfs1(x * 10 + 1);
}
void dfs2(int x) {
	for(int i = 1; i <= len; i++) {
		if(x * a[i] > 1e5 || vis[x * a[i]]) continue;
		vis[x * a[i]] = 1;
		dfs2(x * a[i]);
	}
}
int main() {
	dfs1(1);
	sort(a + 1, a + len + 1);
	vis[1] = 1;
	dfs2(1);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		if(vis[n]) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
