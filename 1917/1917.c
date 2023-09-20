#include <stdio.h>

long long int f(long long int n, long long int k) {
    if (k == 0 || (k % 2 == 0 && n == 1)) return 1;
    if (!(k % 2 == 0) && n == -1) return -1;
    return n * f(n, k-1);
}

int main(void) {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    printf("%lld", f(n, k));
    return 0;
}