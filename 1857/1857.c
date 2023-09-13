#include <stdio.h>

int f(int a, int b) {
    if (a < b) return 0;
    if (a == b) return 1;
    if (b == 1) return a;
    return f(a-1, b-1) + f(a-1, b);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", f(a, b));
    return 0;
}