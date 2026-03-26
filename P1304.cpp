#include <bits/stdc++.h>
using namespace std;
int n;
int wjc(int a){
	for(int i = 2;i < a;i++){
		if(!(a % i)){
			return 0;
		}
	}
	return 1;
}
int main(){
	cin >> n;
	for(int i = 4;i <= n;i = i + 2){
		for(int j = 2; ;j++){
			if(wjc(j) && wjc(i - j)){
				cout << i << '=' << j << '+' << i - j << endl;
				break;
			}
		}
	}
	return 0;
}

