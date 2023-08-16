#include <stdio.h>

double x;

long long int f(double x) {
    long long int temp = (long long int)x;
    if (temp > x) return temp - 1;
    return temp;
}

int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}