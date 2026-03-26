#include <bits/stdc++.h>
using namespace std;

int p;

string work(int i,int j,int x){
    int ij = i * j;//10进制
    if(ij == 0){
        return "0";
    }
    string str = "";
    while(ij != 0){
        int last = ij % x;
        if(last < 10){
            str = char('0' + last) + str;
        }else{
            str = char('A' + last - 10) + str;
        }
        ij /= x;
    }
    return str;
}
int main(){
    scanf("%d",&p);
    for(int i = 1;i <= p - 1;i++){
        for(int j = 1;j <= i;j++){
            if(i < 10 && j < 10){
                printf("%d*%d=%s ",i,j,work(i,j,p).c_str());
            }
            else{
                if(i >= 10 && j >= 10){
                    printf("%d*%d=%s ",(i + 'A' - 10),(j + 'A' - 10),work(i,j,p).c_str());
                }
                else if(i >= 10){
                    printf("%d*%d=%s ",(i + 'A' - 10),j,work(i,j,p).c_str());
                }else{//j >= 10
                    printf("%d*%d=%s ",i,(j + 'A' - 10),work(i,j,p).c_str());
                }
            }
        }
        printf("\n");
    }
    return 0;
}