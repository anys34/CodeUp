#include <stdio.h>

long long int f(int n) {
    if (n <= 2) return 1;
    return f(n-2)+f(n-1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld", f(n));
    return 0;
}