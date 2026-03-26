#include<bits/stdc++.h>
using namespace std;
char a[100];
int t;
int main(){
	cin >> t;
	for(int i = 1;i <= t;i++){
		for(int i = 1;i <= 64;i++){
			cin >> a[i];
		}
		int len = strlen(a + 1);
		for(int i = 1;i <= len;i++){
			if(a[i] != '.'){
				cout << a[i];
			}
		}
		cout << endl;
	}
	return 0;
} 
