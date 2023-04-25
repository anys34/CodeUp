#include <stdio.h>

int main(void) {
    int n,b;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &b);
        a[b-1] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != 1) {
            printf("%d", i+1);
            break;
        }
    }
    return 0;
}