#include<bits/stdc++.h>
using namespace std;
long long n,k,a;
struct wjc{
	int num,m;
	double aa;
}x[101];
bool cmp(wjc o,wjc p){
	if(p.aa != o.aa){
		return o.aa > p.aa;
	}
	return o.aa < p.aa;
} 
int main(){
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= k;j++){
			cin >> a,x[i].m += a;
		}
		x[i].num = i,x[i].aa = 1.0 * x[i].m / k;/*
		在提供的代码片段中，x 是一个数组（或指针），i 是一个循环变量，n 和 k 应该是从输入获取的正整数。数组 x 中的每个元素包含一些关于一个高考题目的信息。

		假设每个元素 x[i] 包含以下属性：

		num: 题目编号（正整数）
		m: 题目在某个维度上的指标值（正整数）
		aa: 题目被选入高考卷的必要性（由若干个指标的平均值决定）
		代码 x[i].num = i 表示将当前循环变量 i 赋值给题目的编号 num。这样，第一个题目编号为 0，第二个题目编号为 1，以此类推，直到第 n个题目编号为 n - 1。
	
		代码 x[i].aa = 1.0 * x[i].m / k 用于计算每个题目的必要性分数 aa。这里，1.0 是为了确保浮点数除法，而不是整数除法。x[i].m 是题目在某个维度上的指标值，而 k 是总的指标数。因此，这个表达式计算的是所有指标值的平均值，结果赋值给 aa，即题目的必要性分数。
	
		总结一下，这段代码的作用是为每个题目计算一个必要性分数，该分数基于题目的指标平均值，并且给每个题目分配一个唯一的编号。
	*/
	} 
	sort(x + 1,x + n + 1,cmp);
	cout << x[1].num << '\n' << x[2].num;
	return 0;
}
