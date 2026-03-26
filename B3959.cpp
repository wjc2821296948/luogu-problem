#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL maxn = 1e6 + 100;
LL n = 0,k = 1;
LL a[maxn];
int main(){ 
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i++){
        if(a[i] < k){
            continue;
        }
        k++;
    }
    k--;
    cout << k;
    return 0;
}
