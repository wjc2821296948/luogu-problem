#include<bits/stdc++.h>
using namespace std;
char a[105];
int sum;
int main(){
	cin.getline(a,105);
	int len = strlen(a);
	for(int i = 0;i < len;i++){
		if(a[i] != ' ' && a[i] != '/r'){
			sum++;
		}
	}
	cout << sum;
	return 0;
} 
