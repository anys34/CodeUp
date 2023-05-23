#include <stdio.h>

int n;

void f() {
    if (n % 2 == 0)
        printf("even");
    else
        printf("odd");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}