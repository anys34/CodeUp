#include <stdio.h>

int main(void) {
    int n, sum = 0, cnt = 1;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = cnt;
            cnt++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 || n-1 == i) {
            for (int j = 0; j < n; j++) {
                sum += a[i][j];
            }
        }
        else {
            sum += a[i][0];
            sum += a[i][n-1];
        }
    }
    printf("%d", sum);
    return 0;
}