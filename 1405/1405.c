#include <stdio.h>

int main(void) {
    int n,k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        for(int j = 0; j < n - 1; j++) {
            k = a[j+1];
            a[j+1] = a[j];
            a[j] = k;

        }
        printf("\n");
    }
    return 0;
}
