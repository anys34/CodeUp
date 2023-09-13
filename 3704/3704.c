#include <stdio.h>

int memo[100001] = { 0, 1, 2, 4 };

int f(int n) {
    if(memo[n]) return memo[n];
    return memo[n] = (f(n-1) + f(n-2) + f(n-3)) % 1000;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
