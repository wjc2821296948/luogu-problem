#include<bits/stdc++.h> 
using namespace std;
int main(){
    unsigned long long n,ans=0; 
    int x;
    cin >> x >> n;
    for(int i=1;i<=n;i++)
    {
        if((x!=6)&&(x!=7)) 
            ans += 250; 
        if(x==7) 
        x=1; 
        else 
            x++; 
    }
    cout << ans;
    return 0;
}
