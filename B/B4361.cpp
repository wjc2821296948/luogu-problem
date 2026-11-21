#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
const int maxn = 3000 + 100;
ll h[maxn],w[maxn];

bool check(){
    for(int i = 1; i < n; i++){
        if(h[i] < h[i + 1]){
            return false;
        }else if(h[i] == h[i + 1]){
            if(w[i] < w[i + 1]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    scanf("%lld",&n);
    for(int i = 1; i <= n; i++){
        scanf("%lld %lld",&h[i],&w[i]);
    }
    ll ans = 0;
    while(!check()){
        for(int i = 1; i < n; i++){
            if(h[i] < h[i + 1]){
                swap(h[i],h[i + 1]);
                swap(w[i],w[i + 1]);
                ans++;
            }else if(h[i] == h[i + 1]){
                if(w[i] < w[i + 1]){
                    swap(h[i],h[i + 1]);
                    swap(w[i],w[i + 1]);
                    ans++;
                }
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}