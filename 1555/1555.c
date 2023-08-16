#include <stdio.h>

int n;

long long int f(int n) {
    if (n == 0) return 0;
    return f(n-1) + n;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}