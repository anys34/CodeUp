#include <stdio.h>

int f(int n) {
    if (n < 3) return n;
    if (n == 3) return 4;
    return f(n-1) + f(n-2) + f(n-3);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}