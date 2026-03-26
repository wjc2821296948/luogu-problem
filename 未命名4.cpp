#include <bits/stdc++.h>
using namespace std;
const int maxn=1e4+10;
int n,m;
int l[maxn],s[maxn];
bool check(int x)
{
	int sum=0;
     for(int i=1;i<=n;i++)
     {
	 	sum+=(l[i]/x)*s[i];
	 }
	return sum>=m;
}
int ans=-1;
int solve()
{
	int l=1;int r=10000;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(check(mid))
		{
			ans=mid;
			l=mid+1;
		} 
		else r=mid-1;
	}
	return ans;
}
int main()
{
	cin>>n>>m>>l[1]>>s[1];
	for(int i=2;i<=n;i++)
	{
		l[i]=((l[i-1]*37011+10193)%10000)+1;
		s[i]=((s[i-1]*73011+24793)%100)+1;
	}
	cout<<solve();
}
