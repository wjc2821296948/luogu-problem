#include <bits/stdc++.h>
using namespace std;
int x,wjc,n,sum; 
string a;
int main(){
    scanf("%d",&x);
    while(x--){
        int sum = 0;
        cin >> n >> wjc >> a;
        for(int i = 0;i < n;i++){
            if(a[i] == 'B'){
                i += wjc - 1;
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
