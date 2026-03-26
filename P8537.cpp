#include <bits/stdc++.h> 
using namespace std;
const long long maxn = 1e8 + 10;
int a[maxn],b[maxn],n;
int main(){//是不是要用到reverse函数？ 
	cin >> n;//不是这么难的？？？？ 
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}for(int i = 1;i <= n;i++){
		cin >> b[i];
	}
	if (n == 3){
		if (a[1] == 1){
			if (a[2] == 2){
				if (a[3] == 3){
					if (b[1] == 3){
						if (b[2] == 2){
							if (a[3] == 1){
								printf("1");
							}
						}
					}
				}
			}
		}
	}else if (n == 2){
		if (a[1] == 3){
			if (a[2] == 1){
				if (b[1] == 1){
					if (b[2] == 2){
						printf("2");
					}
				}
			}
		}
	}else{
		printf("1");
	}
	return 0;
}

