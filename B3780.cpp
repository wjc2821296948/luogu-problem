#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    long long n,m;
    cin>>n>>m;
    ll nums=0;
    for(ll i=0;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        nums+=a*b*c;
    }
    long long res=nums%m;
    long long ans=nums/m;
    if(res) ans++;
    if(res)
        cout<<ans<<" "<<res<<endl;
    else
        cout<<ans<<" "<<m<<endl;
    return 0;
}

