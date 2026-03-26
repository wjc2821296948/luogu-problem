#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,z,w;
    scanf("%lld%lld%lld%lld",&x,&y,&z,&w);
    long long ans = x * z,ans2 = y * w,ans3 = x * w,ans4 = y * z;
    if(ans < INT_MIN || ans2 < INT_MIN || ans3 < INT_MIN || ans4 < INT_MIN){
    	printf("long long ");
	}
    else if(ans > INT_MAX || ans2 > INT_MAX || ans3 > INT_MAX || ans4 > INT_MAX){
    	printf("long long ");
	}
    printf("int");
	return 0;
}
