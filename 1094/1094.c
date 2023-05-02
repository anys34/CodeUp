#include <stdio.h>

int main(void){
    int n,t;
    int a[10000] = {};
    scanf("%d",&n);
    for (int i = 1; i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =n; 1<=i; i--){
        printf("%d ",a[i]);
    }
    return 0;
}