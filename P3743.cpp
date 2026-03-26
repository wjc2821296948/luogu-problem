#include <bits/stdc++.h>
using namespace std;
const double ognas=1e-6;
int a[100005],b[1000005],n,p;
long long sum;
double l,r;
bool wjc(double x){
	double s=p*x;
	for(int i=1;i<=n;i++){
		double c=x*a[i];
		if(c>b[i]){
		   s -= c - b[i];
		}
	}
	if (s >= 0){
		return true;
		
	}else{
		return false;
	}
	
}
int main(){
	cin >> n >> p;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> b[i];
		sum += a[i];
	}
    if(p >= sum){
		cout << -1;
		return 0;
	}
	l = 0;
	r = 1e13 + 1;
	while(r - l > ognas){
		 double mid;
		 mid = (l + r) / 2;
		 if(wjc(mid)){
		 	l = mid;
		 } 
		 else {
		 	r = mid;
		 }
	}
	printf("%.10lf",l);
	return 0;
}
