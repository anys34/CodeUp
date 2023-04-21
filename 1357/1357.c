#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n*2-1; i++){
        if (i < n){
            for(int j = 0; j <= i; j++){
                printf("*");
            }
        }
        else{
            for(int j = i; j < n*2-1; j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}