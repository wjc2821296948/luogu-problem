#include <bits/stdc++.h>
using namespace std;
int n;
const int maxn = 1e4 + 10;
struct str
{
	int a,b,c;
	int id;
	int list;
	/* data */
}a[maxn];

struct list1
{
	int id;
	int score;
	/* data */
}list[maxn];

int getmax(str a){
	if(a.a > a.b){
		return a.a;
	}else{
		return a.b;
	}
}
bool cmp(str x,str y){
	if(x.a + x.b + x.c != y.a + y.b + y.c){
		return x.a + x.b + x.c > y.a + y.b + y.c;
	}else if(x.a + x.b != y.a + y.b){
		return x.a + x.b > y.a + y.b;
	}else if(getmax(x) != getmax(y)){
		return getmax(x) > getmax(y);
	}else{
		return x.id < y.id;
	}
}
int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d %d %d",&a[i].a,&a[i].b,&a[i].c);
		a[i].id = i;
	}
	sort(a + 1,a + n + 1,cmp);
	int tmp = 1;
	for(int i = 1;i <= n;i++){
		if(i > 1 && (a[i].a + a[i].b + a[i].c != a[i-1].a + a[i-1].b + a[i-1].c || a[i].a + a[i].b != a[i-1].a + a[i-1].b || getmax(a[i]) != getmax(a[i-1]))){
			tmp = i;
		}
		a[a[i].id].list = tmp;
	}
	for(int i = 1;i <= n;i++){
		printf("%d\n",a[i].list);
	}
	return 0;
}