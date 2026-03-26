#include<bits/stdc++.h>
using namespace std;
stack<char>st;
string s;
int main(){
	cin >> s;
	int ans = -1;
	for(int i=1;i <= s.size();i++){
		int cnt = 0;
		while(!st.empty()){
			st.pop();
		}
		if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
			continue;
		}for(int j = i;j <= s.size();j++){
			if(s[j]=='('||s[j]=='['||s[j]=='{'){
				st.push(s[j]);
			}else{
				char c=' ';
				if(!st.empty()){
					c = st.top(),st.pop();
				}if((c=='('&&s[j]==')') || (c=='['&&s[j]==']') || (c=='{'&&s[j]=='}')){
					cnt+=2;
				}
				else{
					break;
				}
			}
		}
		ans = max(ans,cnt); 
	}
	cout << ans;
	return 0;
}//APIÅ£±Æ 
