#include <bits/stdc++.h>
using namespace std;
int a,b;
char c;
int sum = 0,ans = 0;
int t;
int main() {
    cin >> t;
    for (int i = 1; i <= t;i++){
    	ans = 0;
    	sum = 0;
    	cin >> a;
    	cin >> c;
    	cin >> b;
    	if (c == '+'){
    		sum = a + b;
		}if (c == '-'){
    		sum = a - b;
		}if (c == '*'){
    		sum = a * b;
		}if (c == '/'){
    		sum = a / b;
		}
		cin >> c;
		cin >> ans;
		if (sum == ans){
			printf("Right!\n");
		}else{
			printf("Wrong!\n");
		}
	}
    return 0;
}
