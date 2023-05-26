#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (i % n == 0) {
            for (int j = 2; j < n; j++) {
                if (j % n == 0 && j * i == n) {
                    printf("%d %d", i, j);
                }
            }
        }
    }
    return 0;
}