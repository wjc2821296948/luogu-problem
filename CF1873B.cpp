#include <bits/stdc++.h>
using namespace std;
long long t,n,a[1000005],ans;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        sort(a + 1,a + n + 1);
        ans = a[1]+1;
        for(int i = 2;i <= n;i++)
        {
            ans *= a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
