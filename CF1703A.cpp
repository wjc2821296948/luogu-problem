#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3 * 3 + 1000;
int t;
int main(){
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	for(int i=0;i<s.size();i++){
    		if(s[i] >='a'&& s[i]<= 'z'){
    			s[i] = s[i] -'a'+'A';
			}
		}
	
		if(s == "YES"){
			cout << "YES" << '\n';
		}else{
			cout << "NO" << '\n';
		}
	}
    return 0;
}
/*
if(tmp == 2){
			if(ceshi=='s'||ceshi=='S'){
				cout << 'YES' << endl;
			}else{
				tmp = 0;
			}
		}else if(tmp == 1){
			if(ceshi=='e'||ceshi=='E'){
				tmp = 2;
			}else{
				tmp = 0;
			}
		}
		if(ceshi=='Y' || ceshi=='y'){	//cout << 'YES' << endl;
			tmp = 1;
		}



*/

/*
if(ceshi=='e'||ceshi=='E'){
				if(ceshi=='s'||ceshi=='S'){
					cout << 'YES' << endl;
				}
			}
*/

