#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node {
	int time,id;
} a[1005];

int n;
double times;

bool cmp(node a,node b) {
	return a.time < b.time;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i].time;
		a[i].id = i;
	}
	sort(a + 1,a + n + 1,cmp);
	for(int i = 1; i <= n; i++) {
		cout << a[i].id << " ";
	}
	for(int j = n - 1;j >= 1;j--) { 
		int i = n - j;
		times += a[i].time * j; 
	}
	printf("\n%.2lf",times / n);
	return 0;
}
