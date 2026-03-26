#include<bits/stdc++.h>
using namespace std;
int n;
void wjc(int a){
    int j;
    for(j = 2;j <= a;j++){
        if(a % j == 0){
            break;
        }
    }
    if(j == a){
        cout << a;
        printf(" ");
    }
    return;
}
int main(){
    cin >> n;
    int m[100];
    for(int i = 0;i < n;i++){
        cin >> m[i];
        wjc(m[i]);
    }
    return 0;
}
