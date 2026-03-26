#include <bits/stdc++.h>
using namespace std;
int h,m;
char cha;
int main(){
	cin>>h>>cha>>m;
	if (h<6){
		h+=24;
	}
	if(h<10){
		cout<<0<<h;
	}else{
		cout<<h;
	}
	cout<<cha;
	if(m<10){
		cout<<0<<m;
	}else{
		cout << m;
	}
	return 0;
}

