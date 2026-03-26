#include<bits/stdc++.h>
using namespace std;
int n,a,c,b,t,p,sum;
int main(){
	cin >> n;
	while(n != 495){
		if(t - p == 495){
			break;
		} 
		sum++;
		a = n % 10;
		c = n / 10 % 10;
		b = n / 100;
		if(c > b) swap(c,b);
		if(a > c) swap(c,a);
		if(c > b) swap(c,b);
		t =b * 100 + c * 10 + a;
		p = a * 100 + c * 10 + b;
		n = t - p;
	}
	cout << sum;
	return 0;	
}
