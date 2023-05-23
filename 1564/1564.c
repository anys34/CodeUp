#include <stdio.h>

int a, b;

int gcd(int a, int b) {
    for(int i = a+b; i >= 0; i--) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}