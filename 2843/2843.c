#include <stdio.h>

int main(void) {
    int n, x, y, in = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x*x+y*y <= 1000000) in++;
    }
    printf("%.6f", (double)(4*in)/n);
    return 0;
}