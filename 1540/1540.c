#include <stdio.h>

int n;

void f() {
    printf("%s", n==0 ? "zero" : "non zero");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}