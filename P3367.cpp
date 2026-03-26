#include <iostream>
using namespace std;
const int maxn=1e4+5;
int n,m1,fa[maxn];
void inti(){
	for(int i=1;i<=n;i++){
		fa[i]=i;
	}
}
int f(int x){
	if(fa[x]==x){
		return x;
	}
	return fa[x]=f(fa[x]);
}
void m(int x,int y){
	int fx=f(x),fy=f(y);
	fa[fx]=fy;
}
int main(){
	cin>>n>>m1;
	inti();
	while(m1--){
		int opt,x,y;
		cin>>opt>>x>>y;
		if(opt==1){
			m(x,y);
		}else if(opt==2){
			if(f(x)==f(y)){
				cout<<"Y"<<'\n';
			}
			else{
				cout<<"N"<<'\n';
			}
		}
	}	
}
