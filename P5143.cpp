#include<bits/stdc++.h>
using namespace std;
struct n{
	int w,j,c;
}a[100100];
bool cmp(n x,n y){
	if(x.c == y.c){
		return x.c>y.c;
	}
	return x.c < y.c;
}
double wjc;
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
    	scanf("%d%d%d",&a[i].w,&a[i].j,&a[i].c);
	}
	sort(a + 1,a + n + 1,cmp);
	for(int i = 1;i <= n - 1;i++){
		wjc += sqrt((a[i + 1].w - a[i].w) * (a[i + 1].w - a[i].w) + (a[i + 1].j - a[i].j) * (a[i + 1].j - a[i].j) + (a[i + 1].c - a[i].c) * (a[i + 1].c - a[i].c));
	}
	printf("%.3lf",wjc);
    return 0;
}
