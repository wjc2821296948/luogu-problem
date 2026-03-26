#include <bits/stdc++.h>
using namespace std;
const int sssss=1e5+10;
int n,ans=0;
stack<char>work;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			work.push(s[i]);
		}else{
			if(!work.empty()){
				work.pop();
			}else{
				ans++;
				work.push('(');
			}
		}
	}if(!work.empty()){
		cout<<ans+work.size()/2;
	}else{
		cout<<ans; 
	}
	return 0;
}//»Ø·Ånb 
