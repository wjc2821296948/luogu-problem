#include<bits/stdc++.h>


using namespace std;


//#define int long long


long long ans = 0;


long long x = 0,y = 0;

int str[60],sum;
int main(){
	string s; 
	cin >> s;
	int tmp = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] >= '0' && s[i] <= '9'){
			tmp = tmp * 10 + s[i] - '0';
		} 
		else if(s[i] == '.'){
			str[++sum] = tmp;
			tmp = 0;
		}
		else if(s[i] == '+'){ 
			x = str[sum];
			y = str[sum - 1];
			sum - 2;
			str[++sum] = x + y;
		}
		else if(s[i] == '-'){
			x = str[sum];
			y = str[sum - 1];
			sum - 2;
			str[sum++] = y - x;
		}
		else if(s[i] == '*'){
			x = str[sum];
			y = str[sum - 1];
			sum - 2;
			str[sum++] = x * y;
		}
		else if(s[i] == '/'){
			x = str[sum];
			y = str[sum - 1];
			sum - 2;
			str[sum++] = y / x;
		}
	}
	ans = str[sum];
	cout << ans;
	return 0;
}
