#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = n; 0 < i; i--) {
        for (int j = 0; j < i-1; j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}