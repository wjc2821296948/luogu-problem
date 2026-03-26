#include<bits/stdc++.h>
using namespace std;

struct abc{
	int chinese,maths,english,zongfen;
	string s;
}a[1001];

int n;

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++) {
		cin >> a[i].s >> a[i].chinese >> a[i].maths >> a[i].english;
		a[i].zongfen = a[i].chinese + a[i].maths + a[i].english;
	}
	for(int i = 1;i < n;i++){
		for(int j = i + 1;j <= n;j++){
			if(a[i].s > a[j].s) {
				swap(a[i].s, a[j].s);
				swap(a[i].chinese, a[j].chinese);
				swap(a[i].maths, a[j].maths);
				swap(a[i].english, a[j].english);
			}
		}
	}
	
	for(int i = 1;i < n;i++){
		for(int j = i + 1;j <= n;j++) {
			if(abs(a[i].chinese - a[j].chinese) <= 5 && abs(a[i].maths - a[j].maths) <= 5 && abs(a[i].english - a[j].english) <= 5 && abs(a[i].zongfen - a[j].zongfen) <= 10){
				cout << a[i].s;
				printf(" ");
				cout << a[j].s; 
				printf("\n");
			}
		}
	}
	
	return 0;
}
