#include<bits/stdc++.h>
using namespace std;
long long n,s,l;
set <int> a;
int main(){
    cin >> n;
    while(n--){
        cin >> s >> l;
        if(s == 1){
        	if(a.find(l) != a.end()){
        		cout<<"Already Exist"<<endl; 
			}else{
            	a.insert(l);
			} 
		}else if(a.empty()){
        	cout<<"Empty"<<endl;
		}else{
            set <int> ::iterator i = a.lower_bound(l),j = i;
            if(j != a.begin()){
            	j--;
			}
            if(i != a.end() && l - (*j) > (*i) - l){
            	j = i;
			}
            cout << (*j) << endl,a.erase(j);
        }
    }
    return 0;
}
