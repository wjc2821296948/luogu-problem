#include<bits/stdc++.h>
using namespace std;
char a[210];
int sum;
int main(){
	cin.getline(a,210);
	int len = strlen(a + 1);
	for(int i = 0;i <= len;i++){
		if(a[i] == 'a' || a[i] == 'd' || a[i] == 'g' || a[i] == 'j' || a[i] == 'm' || a[i] == 'p' || a[i] == 't' || a[i] == 'w' || a[i] == ' '){
			sum += 1;
		}if(a[i] == 'b' || a[i] == 'e' || a[i] == 'h' || a[i] == 'k' || a[i] == 'n' || a[i] == 'q' || a[i] == 'u' || a[i] == 'x'){
			sum += 2;
		}if(a[i] == 'c' || a[i] == 'f' || a[i] == 'i' || a[i] == 'l' || a[i] == 'o' || a[i] == 'r' || a[i] == 'v' || a[i] == 'y'){
			sum += 3;
		}else if(a[i] == 's' || a[i] == 'z'){
			sum += 4;
		}
	}
	cout << sum;
	return 0;
} 
