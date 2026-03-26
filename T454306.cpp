#include <bits/stdc++.h>
using namespace std;
int minn = 0,maxx = 0,n = 0,t = 0;
int main(){
	scanf("%d%d%d",&n,&minn,&maxx);
	if(!(minn < maxx)){
		swap(minn,maxx);
	}
	double sum = 0;
	sum += minn + maxx;
	for(int i = 2;i < n;i++){
		scanf("%d",&t);
		minn = minn < t ? minn:t;
		maxx = maxx > t ? maxx:t;
		sum += t;
		printf("%.2f\n",(sum - minn - maxx) / (i - 1));
	}
	return 0;
}
