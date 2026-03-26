#include <bits/stdc++.h>
using namespace std;
const int maxn=2e4+10;
char str[maxn];
int top,s[maxn],cur;
int main(){
	cin>>str;
	for(int i=0;str[i]!='@';i++){

		if(str[i]>='0'&&str[i]<='9'){
			cur=cur*10+str[i]-'0';
		}
		if(str[i]=='.'){
			s[++top]=cur;
			cur=0;
		}
		if(str[i]=='+'){
			int y=s[top];
			int x=s[top-1];
			top-=2;
			s[++top]=x+y;
		}
		if(str[i]=='-'){
			int y=s[top];
			int x=s[top-1];
			top-=2;
			s[++top]=x-y;
		}
		if(str[i]=='*'){
			int y=s[top];
			int x=s[top-1];
			top-=2;
			s[++top]=x*y;
		}
		if(str[i]=='/'){
			int y=s[top];
			int x=s[top-1];
			top-=2;
			s[++top]=x/y;
		}
	}
	cout<<s[1];
}
