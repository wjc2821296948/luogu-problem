#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 1000;

int n;

struct str
{
	string s;
	int id, y, m, d;
} a[1100];

int ans = 0;
bool cmp(str a,str b)
{
	if (a.y == b.y)
	{
		if (a.m == b.m)
        {
            if (a.d == b.d)
                return a.id > b.id;
            return a.d < b.d;
        }
		return a.m < b.m;
	}
	return a.y < b.y;
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        a[i].id = i;
        cin >> a[i].s;
        scanf("%d %d %d",&a[i].y,&a[i].m,&a[i].d);
    }
    sort(a + 1,a + n + 1,cmp);
    for(int i = 1;i <= n;i++){
        cout << a[i].s << endl;
    }
    return 0;
}