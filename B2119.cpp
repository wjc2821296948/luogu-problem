#include<bits/stdc++.h>
using namespace std;
char in[40];
int len;
int main(){
	cin >> in;
	len = strlen(in);
	if(in[len - 2] == 'e' && in[len - 1] == 'r' && strlen(in) - 2 != 0){
		for(int i = 0;i < len - 2;i++){
			cout << in[i];
		}
	}else if(in[len - 2] == 'l' && in[len - 1] == 'y' && strlen(in) - 2 != 0){
		for(int i = 0;i < len-2;i++){
			cout << in[i];
		}
	}else if(in[len - 3] == 'i' && in[len - 2] == 'n' && in[len - 1] == 'g' && strlen(in) - 3 != 0){
		for(int i = 0;i < len - 3;i++){
			cout << in[i];
		}
	}else{
		for(int i = 0;i < len;i++){
			cout << in[i];
		}
	}
	return 0;
}
