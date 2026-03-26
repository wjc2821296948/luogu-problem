#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a = 0;
    int b = 0;
    for(int i = 1;i <= n;i++){
        int ans = 0;
        int sum = 0;
        int c = i;
        while(c != 0){
            if(c % 2 == 1){
                ans++;
            }else{
                sum++;
            }
            c = c / 2;
        }
        if(ans > sum){
            a++;
        }else{
            b++;
        }
    }
    printf("%d %d",a,b);
    return 0;
}
