#include<iostream>
using namespace std;
int main(){
	int a,b,max=0;
	cin >> a >> b;
	for(int i = a;i <= b;i++){
		if(i % 4 == 0){
			if(i % 100 == 0){
				if(i % 400 == 0){
					max++;
				}
			}else{
				max++;
				
			}
		}
	}
	cout << max;
	printf("\n");
	for(int i = a;i <= b;i++){
		if(i % 4 == 0){
			if(i % 100 == 0){
				if(i % 400 == 0){
					cout<<i<<" ";
				}
			}else{
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
