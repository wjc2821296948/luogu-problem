#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+100;
char str[maxn];
char s[maxn];
int main(){
	int kkksc;
	cin >> kkksc;
	while(kkksc--){
		cin >> str + 1;
		bool flag = 1;
		int tmp = 0;
		for(int i = 1;str[i] != '\0';i++){
			if(str[i]=='(' || str[i]=='['){
				s[++tmp]= str[i];
			}
			else{
				if(tmp == 0 || str[i] == ')' && s[tmp] == '[' || s[tmp] == '(' && str[i] == ']'){
					flag = 0;
					break;
				}else{
					tmp = tmp - 1;
				}
			}
		}
		if(!flag || tmp){
			cout << "No" <<'\n'; 
		}else{
			cout << "Yes" << '\n';
		}
			
		
	}
	return 0;
}

