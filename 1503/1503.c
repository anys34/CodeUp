#include <stdio.h>

int main(void) {
    int n, temp = 1;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0)
            for (int j = n-1; 0 <= j; j--)
                a[i][j] = temp++;
        else
            for (int j = 0; j < n; j++)
                a[i][j] = temp++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}