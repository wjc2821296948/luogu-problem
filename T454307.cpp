#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;
int n;
struct Node{
	int t,k;
	int id;
}a[maxn];
bool cmp(Node x,Node y){
	if(x.t == y.t && x.t * x.k == y.t * y.k){
		return x.id < y.id;
	}
	if(x.t * x.k == y.t * y.k){
		return x.t > y.t;
	}
	return x.t * x.k > y.t * y.k;
}
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].t >> a[i].k;
		a[i].id = i;
	}
	sort(a + 1,a + n + 1,cmp);
	for(int i = 1;i <= n;i++){
		cout << a[i].id << " ";
	}
	return 0;
}
