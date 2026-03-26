#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s,ma=0;
	cin >> s;
	for(int i=2;i<=s;i++)
	{
		bool q=1;
		int k=s-i;
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
			{
				q=0;
				break;
			}
		for(int j=2;j<=sqrt(k);j++)
			if(k%j==0)
			{
				q=0;
				break;
			}
		if(q)
			ma=max(ma,k*i);
	}
	cout << ma << endl;
	return 0;
}
