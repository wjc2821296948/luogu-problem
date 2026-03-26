#include<bits/stdc++.h>
using namespace std;
long long a,b,n;
int main(){
	cin >> a >> b >> n;
	if(b * n <= a){
		cout<<b*n;
	}else{
		cout << (a - (a % b));
	}
}
