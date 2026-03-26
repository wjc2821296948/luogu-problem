#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 50;
int a,b;
int ans = 0;
int tmp = 0;
int main(){
	cin >> a >> b;
    for(int i = a;i <= b;i++){
		tmp = i;
        bool flag = true;
        while(tmp){
            int x = tmp % 10;
            int y = (tmp / 10) % 10;
            if(x <= y){
                flag = false;
                break;
            }
            tmp = tmp / 10;
        }
        if(flag == true){
        	ans++;
		}
    }
    cout << ans;
	return 0;
}

