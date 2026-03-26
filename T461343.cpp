#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7 + 50;
long long d[maxn];
long long a = 0,b = 0,c = 0;
int main(){
	for(int i = 1;i <= 7;i++){
		cin >> d[i];
	}
	sort(d + 1,d + 7 + 1);
    a = d[1];
    b = d[2];
    c = d[7] - a - b;
    cout << a << " " << b << " " << c;
    return 0;
}
