#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 1e5 + 1000;
int a[maxn];
int n;

int b[maxn];
//归并,[l,mid]和[mid + 1,r]已经分别有序
void merge(int l,int m,int r){
    int i = l,j = m + 1,k = l;
    while (i <= m && j <= r){
        // 左半和右半都还有数
        if(a[i] <= a[j]){
            b[k++] = a[i++];
        }else{
            b[k++] = a[j++];
        }
        /* code */
    }
    while (i <= m){
        b[k++] = a[i++];
        /* code */
    }
    while (j <= r){
        b[k++] = a[j++];
        /* code */
    }
    for(int i = l;i <= r;i++){
        // b还原给a
        a[i] = b[i];
    }
}
// 16000 + 2000 20day
//merge:归并
void merge_sort(int l,int r){
    if(l >= r){
        return;
    }
    int mid = (l + r) / 2;
    //递归
    merge_sort(l,mid);
    merge_sort(mid + 1,r);
    //合并
    merge(l,mid,r);
}

signed main(){
    scanf("%lld",&n);
    for(int i = 1;i <= n;i++){
        scanf("%lld",&a[i]);
    }
    printf("live");
    // for(int i = 2;i <= n;i++){
    //     int tmp = a[i];
    //     int j = i - 1;
    //     while (j > 0 && a[j] > tmp){
    //         a[j + 1] = a[j];
    //         /* code */
    //         j--;
    //     }
    //     a[j + 1] = tmp;
    //     // for(int i = 1;i <= n;i++){
    //     //     printf("%d ",a[i]);
    //     // }
    //     // printf("\n");
    // }//插入排序

    // for(int i = 1;i < n;i++){
    //     int k = i;
    //     for(int j = i;j <= n;j++){
    //         if(a[j] < a[k]){
    //             k = j;
    //         }
    //     }
    //     swap(a[i],a[k]);
    //     // for(int i = 1;i <= n;i++){
    //     //     printf("%d ",a[i]);
    //     // }
    //     // printf("\n");
    // }//选择排序
    
    // for(int i = 1;i < n;i++){
    //     bool flag = true;
    //     for(int j = 1;j <= n - i;j++){
    //         if(a[j] > a[j + 1]){
    //             swap(a[j],a[j + 1]);
    //             flag = false;
    //         }
    //     }
    //     if(flag){
    //         break;
    //     }
    // }//冒泡排序

    merge_sort(1,n);
    //归并排序

    for(int i = 1;i <= n;i++){
        printf("%lld ",a[i]);
    }
    
    return 0;
}