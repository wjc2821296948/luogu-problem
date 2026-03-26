#include<iostream>
#include<algorithm>
using namespace std;
int num,k;
int main(){
	cin >> num >> k;
	int a[num];
	for(int i = 0;i < num;i++){
		cin >> a[i];
	}
	sort(a,a + num);
	cout << a[k - 1];
	return 0;
}
