#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 46 + 10;
int g[maxn], w, n, ans;
ll a[10000005], b[10000005], la, lb;
void dfs1(ll cur, int p) {
	if(cur > w) return;
	if(p > n / 2) {
		a[++la] = cur;
		return;
	}
	dfs1(cur + g[p], p + 1);
	dfs1(cur, p + 1);
}
void dfs2(ll cur, int p) {
	if(cur > w) return;
	if(p > n) {
		b[++lb] = cur;
		return;
	}
	dfs2(cur + g[p], p + 1);
	dfs2(cur, p + 1);
}
int solve(ll x) {
	int l = 1, r = lb, ret = -1;
	while(l <= r) {
		int mid = l + r >> 1;
		if(b[mid] + x <= w) {
			ret = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return ret;
} 
signed main() {
	cin >> w >> n;
	for(int i = 1; i <= n; i++) cin >> g[i];
	dfs1(0, 1);
	dfs2(0, n / 2 + 1);
	sort(a + 1, a + la + 1);
	la = unique(a + 1, a + la + 1) - a - 1;
	sort(b + 1, b + lb + 1);
	lb = unique(b + 1, b + lb + 1) - b - 1;
	for(int i = 1; i <= la; i++) {
		int p = solve(a[i]);
		if(p != -1) ans = max(1ll * ans, a[i] + b[p]);
	}
	cout << ans;
	return 0;
}
