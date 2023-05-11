#include <stdio.h>

int a(int n) {
    if (n == 1 || n == 2)
        return 1;
    return a(n-2) + a(n-1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", a(n));
    return 0;
}