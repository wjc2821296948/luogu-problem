#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int maxn = 1e6 + 100;
string s;
ll p[maxn * 2];
ll sum,big;
signed main(){
    cin >> s;
    ll len = s.length();
    s = " " + s;
    for(int i = 1;i <= len;i++){
        if(s[i] == 'G'){
            sum++;
        }else{
            sum--;
        }
        if(!p[sum + maxn]){
            p[sum + maxn] = i;
        }
        // big = max(big,i - p[sum + maxn]);
        big = max(big,sum ? i - p[sum + maxn] : i);
        // if (sum) {
        //     big = max(big, i - p[sum + maxn]);
        // } else {
        //     big = max(big, i);
        // }
        // 与big = max(big,sum ? i - p[sum + maxn] : i);相同
    }
    printf("%lld",big);
    return 0;
}
