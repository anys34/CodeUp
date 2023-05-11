#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = n; 0 < i; i--) {
        for (int j = n; n-i < j; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}