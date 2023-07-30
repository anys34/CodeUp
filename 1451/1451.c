#include <stdio.h>

int main(void) {
    int n, a[10000], tmp = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i] < a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }

    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}