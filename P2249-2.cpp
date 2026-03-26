#include <bits/stdc++.h>
using namespace std;

long long a[1000005],q;

int l,r,n,m,x;

bool check(int ss){
	return x <= a[ss];
}

int main(){
	
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	a[n + 1] = 0x3f3f3f3f;
	while (m--){
		cin >> x;
		int l = 0,r = n + 1;
		while(r - l > 1){ //r = l + 1
		
    	    int mid = (l + r) / 2;
    	    
    	    if(check(mid)){
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
			cout << r << " ";
		}
    	
	}
	
    
	return 0;
}

