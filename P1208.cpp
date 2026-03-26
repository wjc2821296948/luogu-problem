#include<bits/stdc++.h>
using namespace std;
long long n,m,sum;
struct man{
	long long d,s;
}a[2000005];
bool Valorant(man x,man y){
	return x.d < y.d;
}
int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		cin >> a[i].d >> a[i].s;
	sort(a,a + m,Valorant);
    int mudie = 0;
    while(n > 0){
        if(a[mudie].s > 0)
        {
            a[mudie].s--;
            sum += a[mudie].d;
            n--;
        }
        else{
        	mudie++;
		}
    }
    cout << sum;
	return 0;
}









//来源：BiliBili 作者链接： https://www.douyin.com/user/MS4wLjABAAAAua2ELlJNRHnMtUa0bLFQxPqttie3G1QZnQ79XGv_EQEcmx6_WdmgBrZhXPmIP40o
