#include <stdio.h>

int a(int n) {
    if (n == 1) return 1;
    else return a(n-1) * n;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", a(n));
    return 0;
}