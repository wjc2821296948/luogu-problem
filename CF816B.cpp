#include<bits/stdc++.h>
using namespace std;
int n,tot,k,cnt[1000005],cur,ans = INT_MAX;
struct Node
{
	int top;
	int col;
}a[1000005];
bool cmp(Node x,Node y)
{
	return x.top < y.top;
}
int main()
{
	cin>>n>>k;
	for(int i = 1;i <= k;i++)
	{
		int t;cin>>t;
		for(int j = 1;j <= t;j++)
		{
			int pos;cin>>pos;
			a[++tot]={pos,i};
		}
	}
	sort(a + 1,a + n + 1,cmp);
	for(int l = 1,r = 1;r <= n;r++)
	{
		cnt[a[r].col]++;
		if(cnt[a[r].col] == 1)
		{
			cur++;
		}
		while(cnt[a[l].col] > 1)
		{
			cnt[a[l++].col]--;
		}
		if(cur == k)
		{
			ans = min(ans,a[r].top - a[l].top);
		}
	}
	cout<<ans;
	return 0;
}
