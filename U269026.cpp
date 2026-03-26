#include <bits/stdc++.h>
using namespace std;

long long a[1000005],q;

int l,r,n,m,x;

bool check1(int pos){
	if(a[pos] >= x) return true;
	else return false;
}
bool check2(int pos){
	if(a[pos] <= x) return true;
	else return false;
}
int main(){
	
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	a[n + 1] = INT_MAX;
	while (m--){
		cin >> x;
		int l = 0,r = n + 1;
		while(r - l > 1){ //r = l + 1
		
    	    int mid = (l + r) / 2;
    	    
    	    if(check1(mid)){
    	      	r = mid;
			}
    	    else{
    	       	l = mid;
			}
    	}
    	if(a[r] != x){
			cout<< -1 << " ";
		}
		else {
			cout << r - 1 << " ";
		}
		l = 0,r = n + 1;
		while(r - l > 1){ //r = l + 1
		
    	    int mid = (l + r) / 2;
    	    
    	    if(check2(mid)){
    	      	l = mid;
			}
    	    else{
    	       	r = mid;
			}
    	}
    	if(a[l] != x){
			cout<< -1 << "\n";
		}
		else {
			cout << l - 1 << "\n";
		}
	}
	
    
	return 0;
}

