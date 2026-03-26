#include <bits/stdc++.h>
using namespace std;
long long w,a1,a2,n,t,a[10005];
int main(){
    cin >> t;
    while(t--){
    	a1 = 0;
    	a2 = 0;
    	cin >> n;
    	for(int i = 1;i <= n;i ++)
		{
		    cin >> a[i];
		    if(a[i])
			{
				a1 ++;
			}
	    }
	    for(int i = 1;i <= n;i ++)
		{
	    	cin >> w;
	    	if(w == a[i]) 
			{
				a2 ++;
			}
	    	if(w) 
			{
				a1 --;
			}
		}
		cout << min(n - a2,abs(a1)+1) << endl;
	}
	
	return 0;
}
