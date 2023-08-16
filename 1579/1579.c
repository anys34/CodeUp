#include <stdio.h>

int mymin(int a, int b) {
    if (a < b) return a;
    return b;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
    return 0;
}