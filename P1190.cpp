#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pr printf

const int maxn = 1e4 + 1000;
int n,m;

struct str
{
    int water = 0,want,id;
    bool a = false;
    /* data */
}a[maxn];

bool cmp(str x,str y){
    return x.water <= y.water;
}

// int to(int m,str a[maxn]){ 
//     // sort(a + 1,a + m + 1,cmp);
//     int tmp = 0;
//     for(int i = 1;i <= m;i++){
//         if(tmp > a[i].water){
//             tmp = a[i].water;
//         }
//     }
//     return tmp;
// }
int minwater(int m,str a[maxn]) {
    int minid = 1;
    for (int i = 1; i <= m; i++) {
        if (a[i].water < a[minid].water) {
            minid = i;
        }
    }
    return minid;
}

bool maxcmp(str x,str y){
    return x.water >= y.water;
}

int main(){
    sc("%d %d",&n,&m);
    for(int i = 1;i <= n;i++){
        sc("%d",&a[i].want);
        a[i].id = i;
    }
    for(int i = 1;i <= m;i++){
        a[i].water = a[i].want;
        a[i].a = true;
    }
    for(int i = m + 1;i <= n;i++){
        if(a[i].a == false){
            a[minwater(m,a)].water += a[i].want;
            a[i].a = true;
        }
    }
    sort(a + 1,a + m + 1,maxcmp);
    printf("%d",a[1].water);
    return 0;
}