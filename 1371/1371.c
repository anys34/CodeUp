#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n*2; i++) {
        if (i < n) {
            for (int j = 1; j < n-i; j++) {
                printf(" ");
            }
            printf("*");
            for (int j = 0; j < i*2; j++) {
                printf(" ");
            }
            printf("*");
        }
        else {
            for (int j = n; j < i; j++) {
                printf(" ");
            }
            printf("*");
            for (int j = 2; j < 2*(n*2-i); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}