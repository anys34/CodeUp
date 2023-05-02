#include <stdio.h>

int main(void){
    long int r,n=0;
    int num[10000] = {};
    scanf("%ld", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d",&num[i]);
    }
    for(int i =1;i<=n;i++){
        if (r>num[i])
            r = num[i];
    }
    printf("%ld",r);
    return 0;
}