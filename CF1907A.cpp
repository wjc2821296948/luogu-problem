#include <bits/stdc++.h>
using namespace std;
long long a = 0;
char e[8] = {'a','b','c','d','e','f','g','h'}; 
char b[3],c = 0,d = 0;
int main(){
	cin>>a;
	while(a--){
		cin>>b;
		c = b[0];
		d = b[1];
		for(int i=1;i<= 8;i++){
			if(i +'0'!= d){
				cout<<c<<i<<endl;
				continue;
			}
		}
		for(int j=0;j<= 7;j++){
			if(e[j] != c){
				cout<<e[j]<<d<<endl;
				continue;
			}
		}
	}
	
	
	return 0;
}

