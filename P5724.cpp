#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10001];
	int max=0;
	int mini=1983;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max) max=a[i];
		if(a[i]<mini) mini=a[i];
	}
	cout<<max-mini;
}
