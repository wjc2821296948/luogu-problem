#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int k,d,m,f;
int K[maxn],D[maxn],M[maxn],F[maxn];
int topk = 1,topd = 1,topm = 1,topf = 1;
bool cmp(int x,int y){
	return x>y;
}
int main(){
    cin >> k >> d >> m >> f;
    for(int i = 1;i <= k;i++) cin >> K[i];
    for(int i = 1;i <= d;i++) cin >> D[i];
    for(int i = 1;i <= m;i++) cin >> M[i];
    for(int i = 1;i <= f;i++) cin >> F[i];
    sort(K + 1,K + k + 1,cmp);
    sort(D + 1,D + d + 1,cmp);
    sort(M + 1,M + m + 1,cmp);
    sort(F + 1,F + f + 1,cmp);
    int q;cin >> q;
    while(q--){
		int a,b,c;cin >> a >> b >> c;
		int sum = 0;
		sum += K[topk++];
		while(a--){
			sum += D[topd++];
		}
		while(b--){
			sum += M[topm++];
		}
		while(c--){
			sum += F[topf++];
		}
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << sum / 11.0 << endl;
		
	}
    return 0;
}
