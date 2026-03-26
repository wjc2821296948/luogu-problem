#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define end return 0
#define wifi no_money_wifi
#define redian flash_point

const int maxn = 1e4 + 1000;

int n,m;
int l[maxn],s[maxn];

int sum;
int ans;
int mid;

bool flash_point(int x){
	
	sum = 0;
	
    for(int i = 1;i <= n;i++){
	 	sum += l[i] / x * s[i];
	}
	
	return sum >= m;
}

int no_money_wifi(){
	
	int l,r;
	
	l = 1;
	r = 10000;
	
	while(l <= r){
		
		mid = (l + r) >> 1;
		
		if(redian(mid)){
			ans = mid;
			l = mid + 1;
		} 
		else{
			r = mid - 1;
		} 
		
	}
	
	return ans;
	
}

int main(){
	
	cin >> n >> m >> l[1] >> s[1];
	
	for (int i = 2;i <= n;i++){
		l[i] = ((l[i - 1] * 37011 + 10193) % 10000) + 1;
		s[i] = ((s[i - 1] * 73011 + 24793) % 100) + 1;
	}
	
	cout << wifi();
	
	end;
}

