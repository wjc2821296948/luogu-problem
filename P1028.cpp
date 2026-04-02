#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[1001];
ll run(ll tmp){
    if(a[tmp] == 0){
        a[tmp] = 1;
        for(ll i = 1;i <= tmp / 2;i++){
            a[tmp] += run(i);
        }
    }
    return a[tmp];
}

int main(){
    scanf("%lld",&n);
    printf("%lld",run(n));
}