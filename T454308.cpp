#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
	cin >> a;
	if(a >= 90){
		cout<<"4.0";
	}else if(a < 90 && a >= 60){
		printf("%.1lf",4.0 - (90 - a) * 0.1);
	}else if(a < 60 && sqrt(a) * 10 < 60){
		cout<<"0.0";
	}else{
		printf("%.1lf",4.0 - (90 - (int)(sqrt(a) * 10)) * 0.1);
	}
	return 0;
} 
