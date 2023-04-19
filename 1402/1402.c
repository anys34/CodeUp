#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = n-1; 0 <= i; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}
