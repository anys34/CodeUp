#include <stdio.h>

int main(void){
    int n,t;
    int a[24] = {};
    scanf("%d",&n);
    for (int i = 0; i<n;i++){
        scanf("%d",&t);
        a[t] += 1;
    }
    for(int i =1;i<=23; i++){
        printf("%d ",a[i]);
    }
    return 0;
}