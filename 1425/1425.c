#include <stdio.h>

int main(void) {
    int n, c, temp;
    scanf("%d %d", &n, &c);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i-1]);
        if (i % c == 0)
            printf("\n");
    }
    return 0;
}