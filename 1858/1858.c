#include <stdio.h>

int f(int n, int k) {
    if (k == 1 || k == n) return 1;
    return f(n - 1, k - 1) + f(n - 1, k);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", f(n, k));
    return 0;
}