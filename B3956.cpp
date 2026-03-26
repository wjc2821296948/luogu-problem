#include <bits/stdc++.h>
using namespace std;
int n,sum;
string s;
int main(){
	cin >> n >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] <= 'Z' && s[i] >= 'A'){
			sum -= s[i]; 
		}else{
			sum += s[i] - 'a' + 1;
		}
	}
	cout << sum;
	return 0;
}
