#include <bits/stdc++.h>
using namespace std;
void wjc(int n,int sum){
	for(int i=2;i<n;i++){
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			cout<<i;
			cout<<endl;
		}
		sum=0;
	}
}
int main(){
	int n;
	cin>>n;
	int sum=0;
	wjc(n,sum);
	return 0;
}
