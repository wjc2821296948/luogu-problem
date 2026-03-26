#include<bits/stdc++.h>
using namespace std;
int x,maxx = -1;
struct n{
	string a;
	int chinese,maths,english;
}c[1001];
int b[1001];
int main(){
	cin>>x;
	for(int i=1;i<=x;i++){
		cin >> c[i].a >> c[i].chinese >> c[i].maths >> c[i].english;
		b[i] += c[i].chinese+c[i].maths+c[i].english;
	}
	for(int i = 1;i <= x;i++){
		maxx = max(maxx,b[i]);
	}
	for(int i = 1;i <= x;i++){
		if(b[i] == maxx){
			cout << c[i].a << " " << c[i].chinese << " " << c[i].maths << " " << c[i].english;
			return 0;
		}
	}
    return 0;
}
