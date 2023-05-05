#include <stdio.h>

int main(void) {
    int n, max = 0, min = 100;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("%d %d", max, min);
    return 0;
}