#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int flag[25][25][25];
int num[30];

void dfs(int temp1,int temp2,int temp3) {
//	cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;
	if(flag[temp1][temp2][temp3]==0) {
		flag[temp1][temp2][temp3]=1;
	} else {
		flag[temp1][temp2][temp3]=1;
		return ;
	}

	if(temp1==0) {
		num[temp3]=1;
	}

	if(temp1!=0) {
		if(temp1>c-temp3) dfs(temp1+temp3-c,temp2,c);
		else dfs(0,temp2,temp1+temp3);

		if(temp1>b-temp2) dfs(temp1+temp2-b,b,temp3);
		else dfs(0,temp1+temp2,temp3);
	}

	if(temp2!=0) {
		if(temp2>a-temp1) dfs(a,temp2+temp1-a,temp3);
		else dfs(temp1+temp2,0,temp3);

		if(temp2>c-temp3) dfs(temp1,temp2+temp3-c,c);
		else dfs(temp1,0,temp2+temp3);
	}

	if(temp3!=0) {
		if(temp3>a-temp1) dfs(a,temp2,temp1+temp3-a);
		else dfs(temp1+temp3,temp2,0);


		if(temp3>b-temp2) dfs(temp1,b,temp2+temp3-b);
		else dfs(temp1,temp2+temp3,0);
	}
}

int main() {
	cin>>a>>b>>c;
	dfs(0,0,c);
	for(int i=0; i<=20; i++) {
		if(num[i]!=0) cout<<i<<" ";
	}
	return 0;
}
