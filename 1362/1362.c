#include <stdio.h>

int main(void) {
    int n, sum=0;
    scanf("%d", &n);
    for (int i = n; 0 < i; i--) {
        sum += i;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", sum);
            sum--;
        }
        printf("\n");
    }
    return 0;
}