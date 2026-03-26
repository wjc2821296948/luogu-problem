#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 0;

int main(){
    scanf("%d",&n);
    ans += n;
    while(n >= 3){
        n = n - 2;
        ans++;
    }
    printf("%d",ans);
    return 0;
}