#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for(int j = i * n; (i - 1) * n < j; j--) {
                printf("%d ", j);
            }
        } else {
            for(int j = (i - 1) * n + 1; j <= n * i; j++) {
                printf("%d ", j);
            }
        }
        
        printf("\n");
    }
    return 0;
}