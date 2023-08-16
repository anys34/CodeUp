#include <stdio.h>

int n;

long long int f(int n) {
    if (n == 0) return 0;
    else if(n == 1) return 1;
    return f(n-1) * n;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}