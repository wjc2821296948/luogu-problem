#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 100;
stack<int> s;
int p = 0,n = 0,m = 0,o = 0;
int main(){
	cin >> m;
	int tmp = 0;
	while(m--){
		string str;
		cin >> str;
		if(str == "push"){
			cin >> tmp;
			s.push(tmp);
		}if(str == "pop"){
			s.pop();
		}if(str == "empty"){
			if(s.empty()){
				cout << "YES";
				printf("\n");
			}else{
				cout << "NO";
				printf("\n");
			}
		}if(str == "query"){
			cout << s.top();
			printf("\n");
		}
		
	}
	
	return 0;
}

