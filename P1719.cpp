#include<bits/stdc++.h>
using namespace std;
long long ans,n,sum[120][120],a[120][120];
int main()
{
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
            
		}
	}
	for(int x1 = 1;x1 <= n;x1++)
	{
		for(int y1 = 1;y1 <= n;y1++)
		{
			for(int x2 = x1;x2 <= n;x2++)
			{
				for(int y2 = y1;y2 <= n;y2++)
				{				
					ans = max(ans,sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2]+sum[x1 - 1][y1 - 1]);
				}
			}
		}
	}
	cout<<ans;
    return 0;
}
