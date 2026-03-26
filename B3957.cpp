#include <bits/stdc++.h>
using namespace std;
int n,sum = 0;
int main(){
    cin >> n;
	int a[n] = {};
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (sqrt(a[i] + a[j]) == int(sqrt(a[i] + a[j]))){
            	sum++;
			}
        }
    }
    cout << sum;
}
