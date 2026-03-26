#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 100;
int p[maxn];
int t = 0,n = 0,tmp = -1;
int main() {
    cin >> t;
    while(t--){ 
        cin >> n;
        for(int i = 0;i < n;i++){//用0开始，1试过过不去 
            cin >> p[i];
            if(i != p[i] && tmp == -1){ //如果p[i]不等于它的位置（i）且未被赋值 
                tmp = p[i];
            }else if(i != p[i]){
                tmp = tmp & p[i]; 
            }
        }
        printf("%d\n",tmp);//输出 
        tmp = -1;//记得要清0
    }
    return 0;
}
