#include <bits/stdc++.h>
using namespace std;
int m;
int main(){
	scanf("%d",&m);
	for(int i = 1;i < m;i++){
		for(int j = i;(i + j) * (j - i + 1) / 2 <= m;j++){
			if((i + j) * (j - i + 1) / 2 == m){//(i + j) * (j - i) / 2
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}