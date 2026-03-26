#include <bits/stdc++.h>
using namespace std;
int n;
const int maxn = 1e3 + 10;
struct str
{
	int score;
	string name;
	/* data */
}a[maxn];

bool cmp(str x,str y){
	return x.score > y.score;
}
int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i].score);
		cin >> a[i].name;
	}
	sort(a + 1,a + n + 1,cmp);
	cout << a[1].name;
	return 0;
}