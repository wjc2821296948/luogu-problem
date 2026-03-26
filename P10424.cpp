#include<bits/stdc++.h>
using namespace std;
int tmp = 0; 
int t,ans = 0;
int main(){
    cin >> t;
    for(int i = 1;i <= t;i++){
        tmp = i;
        for(int j = 1;tmp;j++){
            if(j % 2 != (tmp % 10 )% 2){
				break;
			}
            tmp /= 10;
        }
        if(tmp == 0){
			ans++;	
		}
    }
    cout << ans;
    return 0;
}
