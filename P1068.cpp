#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e4 + 100;
int n,m;

struct str{
    int id,score;
}a[maxn];

bool cmp(str x,str y){
    if(x.score != y.score){
        return x.score > y.score;
    }
    else{
        return x.id < y.id;
    }

}

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i++){
        scanf("%d %d",&a[i].id,&a[i].score);
    }
    sort(a + 1,a + n + 1,cmp);
    int pass = m * 1.5;
    printf("%d ",a[pass].score);
    for(int i = pass ;i <= n;i++){
        if(a[i].score == a[i + 1].score){
            pass++;
        }else{
            break;
        }
    }
    printf("%d\n",pass);
    for(int i = 1;i <= pass;i++){
        printf("%d %d\n",a[i].id,a[i].score);
    }
    return 0;
}