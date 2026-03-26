#include<bits/stdc++.h>
using namespace std;
void out(int x,int y){
    bool s =  x > y;
    bool n = x <= y;
    bool v = x != y; 
    cout << s << " " << n << " " << v;
}
int main(){
    int a,b;
    cin >> a >> b;
    out(a,b);
    return 0;
}
