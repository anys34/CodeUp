#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (i <= n){
            for(int j = 1; j <= i; j++){
                printf("*");
            }
        }
        else{
            for(int j = n; j <= i+5; j--){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}