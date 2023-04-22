#include <stdio.h>

int main(void) {
    int n,cnt=1;
    scanf("%d", &n);
    int j = (n-1)/2;
    
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