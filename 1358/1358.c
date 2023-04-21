#include <stdio.h>

int main(void) {
    int n,cnt=1;
    scanf("%d", &n);
    int j = (n-1)/2;
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;i<j;j--){
    //         printf(" ");
    //     }
    //     for(int k=0;k<2*i-1;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    while(cnt != n+2) {
        for(int i = 0; i < j; i++) {
            printf(" ");
        }
        for(int i = 0; i < cnt; i++) {
            printf("*");
        }
        printf("\n");
        cnt+=2;
        j--;
    }
}