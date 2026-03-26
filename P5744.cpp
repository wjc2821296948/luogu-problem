#include<bits/stdc++.h>
using namespace std;
struct abs{
	int num,noip;
	string s;
}a[1001];
int n;
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].s >> a[i].num >> a[i].noip;
		if(a[i].noip * 1.2 < 600){
			a[i].noip = a[i].noip*1.2;
		}else{
			a[i].noip = 600; 
		}
		a[i].num++;
	}
	for(int i = 1;i <= n;i++){
		cout << a[i].s << " " << a[i].num << " " << a[i].noip << endl;
	}
	return 0;
}
