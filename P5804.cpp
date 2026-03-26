#include<bits/stdc++.h>//万能头 
using namespace std;
 
const int maxn = 1e4 + 500;//为了保险，开大点，实际1e3+1就够了 
int n,a[maxn], b[maxn], ans = INT_MIN;//全局变量好习惯 
int sum = INT_MAX;//用于存储最小值 

int main(){
	
    scanf("%d",&n);//输入整数 n || 快读 
    for(int i = 1; i <= n; i++){//第二行n个整数 
    	cin >> a[i]; // 用一维数组a来存储 
	}for(int i = 1; i <= n; i++){//第三行n个整数 
    	cin >> b[i]; // 用一维数组b来存储 
	}
	
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
        	sum = min(sum, abs(a[i] - b[j]));//用sum来记录数组a与b（绝对值）的最小值 
		}
        ans = max(ans, sum);//用ans来记录sum出现过的最大值 
        sum = INT_MAX;//把sum重新赋值为int的最大值 
    }
    
    printf("%d",ans);//输出答案ans 
    
    return 0;//返回好习惯 
}
