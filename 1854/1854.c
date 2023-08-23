#include <stdio.h>

long long int f(long long int n) {
    if (n == 0) return 0;
    return n % 10 + f(n/10);
}

int main(void) {
    long long int n;
    scanf("%lld", &n);
    printf("%lld", f(n));
    return 0;
}