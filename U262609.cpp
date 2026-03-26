#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e3 + 10;
int n;
int a[maxn];
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n - i;j++){
			if (a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
			}
		}
	}for(int i = 1;i <= n;i++){
		cout << a[i] << " ";
	}
	
	return 0;
}

