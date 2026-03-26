#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1001000],l = 0,r = 0,k = 0,ans = 0;
long long red[1001000],yellow[1001000],blue[1001000];
int main(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        cin >> l >> r >> k;
        if(k == 1){
            yellow[l] += 1;
            yellow[r + 1] -= 1;
        }if(k == 2){
            blue[l] += 1;
            blue[r + 1] -= 1;
        }if(k == 3){
            red[l] += 1;
            red[r + 1] -= 1 ;
        }
    }
    for(int i = 1;i <= n;i++){
        yellow[i] = yellow[i - 1 ]+ yellow[i];
        red[i] = red[i - 1] + red[i];
        blue[i] = blue[i - 1] + blue[i];
        if(blue[i] != 0 && yellow[i] != 0 && red[i] == 0){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
//hh,回放是个好东西。 
