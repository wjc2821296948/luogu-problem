#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 1000;
int n,m,a[maxn];
string s;
long long ans = 0;
int main(){
    scanf("%d",&n);
    cin >> s;
    scanf("%d",&m);
    for(int i = 0;i <= s.size() - 1;i++){
        int tmp = 0;
        if(s[i] >= 'A' && s[i] <= 'F'){//字母
            tmp = int(s[i] - 'A' + 10);
        }else{//数字
            tmp = int(s[i] - '0');
        }
        ans = ans * n + tmp;
    }// to 10
    if(ans == 0){
    	printf("0");
    	return 0;
	}
	int tmp = 0;
    while(ans > 0) {
        a[tmp++] = ans % m;
        ans = ans / m;
    }// to 
    for(int i = tmp - 1;i >= 0;i--){ 
		if(a[i] > 9){
			printf("%c",char(a[i] - 10 + 'A'));
		}
		else{
			printf("%d",a[i]);
		} 
	} 
}