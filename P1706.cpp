#include<bits/stdc++.h>
using namespace std;
int ans[30],n;
bool vis[10];
void dfs(int cnt)
{
	if(cnt == n)
	{
		for(int i = 0;i < n;i++)
		{
			cout << setw(5) << ans[i];
		}
		cout<<'\n';
		return;
	}
	for(int i = 1;i <= n;i++)
	{
		if(vis[i])
		{
			continue;
		}
		ans[cnt] = i;
		vis[i] = 1;
		dfs(cnt + 1);
		vis[i] = 0;
	}
}
int main()
{
	cin>>n;
	dfs(0);
	return 0;
}
