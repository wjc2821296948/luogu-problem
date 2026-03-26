#include <bits/stdc++.h>]
using namespace std;
const int maxn = 3e4;
int n,x,y;
int a[maxn],b[maxn];
int main(){
    cin >> n >> x >> y;
    for(int i = 0;i < n;i++){
        cin >> a[i] >> b[i];
    }
    sort(a,a + n);
    sort(b,b + n);
	int sum = 0;
    for(int i = 0;i < n;i++){
        if(a[i] < b[i]){
        	sum += (b[i] - a[i]) * x;
		}
        else{
        	sum += (a[i] - b[i]) * y;
		}
    }
    cout << sum;
}
//×÷ÕßÁ´½Ó£ºhttps://www.luogu.com.cn/contest/165016#description
