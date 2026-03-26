#include <bits/stdc++.h>
using namespace std;
struct wjc{
	string num;
	int id;
}s[25];
bool wjcnb(wjc x,wjc y){
	if(x.num.size() == y.num.size()){
		return x.num > y.num;
	}
	return x.num.size() > y.num.size();
}
int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> s[i].num;
		s[i].id = i;
	}
	sort(s + 1,s + n + 1,wjcnb);
	cout << s[1].id << '\n' << s[1].num;
	return 0;
}
