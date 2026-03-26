#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 1000;

int x,y;

bool tf(int temp){
	if(temp == 1){
		return false;
	}
    for(int i = 2;i * i <= temp;i++){// /10可以/2，/9可以/3，/8可以/4
		if (temp % i == 0){
			return false;
		}
    }
    return true;
}

int ans = 0;

int main(){//我不知道什么是素数，也许是质数 
    scanf("%d %d",&x,&y);
    //yes
    if(x > y){
        swap(x,y);
    }
    while(x <= y){
        ans += tf(x);
        x++;
    }
    printf("%d",ans);
    return 0;
}