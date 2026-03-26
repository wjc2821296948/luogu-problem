#include<iostream>
using namespace std;
double wjc(double a,double b,double c){
	return max(max(a,b),c) / (max(max(a+b,b),c) * max(max(a,b),b+c));
}
int main(){
	double a,b,c; cin >> a >> b >> c;
	printf("%.3lf",wjc(a,b,c));
	return 0;
}
