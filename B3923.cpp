#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000],m,N,sum = 0;
    cin >> a[0] >> a[1] >> m >> N;
    for(int i = 0;i < N;i++){
    	sum = sum + a[i];
    	a[i + 2] = a[i] + a[i + 1];
		if(a[i] >= m){
    		break;
    	}
    }
    cout << sum;
    return 0;
}
