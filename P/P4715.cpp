#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
const int maxn = (1 << 7) + 10;
struct str
{
    ll id,value;
    /* data */
}a[maxn];
vector<ll> bfs(vector<ll> ing){
    if(ing.size() == 2){
        return ing;
    }
    vector<ll> tmp;
    for(ll i = 1; i <= ing.size() / 2; i++){
        tmp.push_back(max(ing[2 * i - 1],ing[2 * i - 2]));
    }
    return bfs(tmp);
}
ll search(ll l,ll r,ll key){
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if(a[mid].value < key){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        /* code */
    }
    return l;
}
bool cmp(str x,str y){
    return x.value < y.value;
}
int main(){
    scanf("%lld",&n);
    vector<ll> ing;
    n = 1 << n;
    for(ll i = 1; i <= n; i++){
        ll tmp;
        scanf("%lld",&tmp);
        ing.push_back(tmp);
        a[i].value = tmp;
        a[i].id = i;
    }
    sort(a + 1,a + n + 1,cmp);
    ing = bfs(ing);
    // for(ll i = 1;i <= 2;i++){
    //     ll mmax = 0,id = 0;
    //     for(ll j = 0;j < 4;j++){
    //         if(ing[j] >= mmax){
    //             mmax = ing[j];
    //             id = j;
    //         }
    //     }
    //     ing.erase(ing.begin() + id);
    // }
    ll id = search(1,n,min(ing[0],ing[1]));
    printf("%lld",a[id].id);
    return 0;
}