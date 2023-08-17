#include <stdio.h>

long long int n;

long long int f(long long int n) {
    long long int result = 0;
    while(n != 0) {
        result *= 10;
        result += (n % 10);
        n /= 10;
    }
    return result;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}