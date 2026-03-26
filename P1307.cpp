#include<bits/stdc++.h>
using namespace std;
char num[110];
int main(){
    scanf("%s",num);
    long long len=strlen(num),check=0,w=len;
    while(num[w-1] == 48) {
		check++;
		w--;
	}
    if(num[0]=='-'){
        printf("-");
        for(int i=len-1-check;i>0;i--){
        	printf("%c",num[i]);
		} 
    }else{
        for(int i=len-1-check;i>=0;i--){
        	printf("%c",num[i]);
		} 
    }
    return 0;
}
