#include <bits/stdc++.h>
using namespace std;
int a[10000],z[10000],n;
int main (){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	} 
    for(int i = 1;i <= n;i++){
        z[i] = abs(a[i] - a[i + 1]);
    }
    sort(z + 1,z + n);
	for(int i = 1;i < n;i++){
        if(z[i] != i){
            cout << "Not jolly";
            return 0;
        }
    }
    cout << "Jolly";
	return 0; 		
} 
