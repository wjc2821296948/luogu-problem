#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&(a>c&&b<c)) cout<<c<<" "<<b<<" "<<a;
    if(a>b&&(a<c&&b<a)) cout<<b<<" "<<a<<" "<<c;	
	if(b>a&&(b>c&&c>a)) cout<<a<<" "<<c<<" "<<b;
	if(b<a&&(b>c&&c<a)) cout<<c<<" "<<b<<" "<<a;
	if(b==a&&(b==c&&c==a)) cout<<a<<" "<<c<<" "<<b;
	if(b==a&&(b>c&&c<a)) cout<<c<<" "<<a<<" "<<b;
}
