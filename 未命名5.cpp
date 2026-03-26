#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define end return 0
ll n;
const int maxn = 1e6 + 1000;
int t[maxn];
struct node {
	int time;
	int id;
}a[maxn];
double times;
bool cmp(node a,node b) {
	return a.time < b.time;
}
int main(){
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> t[i];
	}
	sort(t + 1,t + n + 1,cmp);
	for(int i = 1;i <= n;i++){
		times += (n - i) * a[i].num;
	}
	for (int i = 1;i <= n;i++){
		printf("%d ",a[i].id);
	}
	printf("%d",times);
	end;
}

