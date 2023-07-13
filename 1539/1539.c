#include <stdio.h>

int n;

void f(int n) {
    printf(n ? "true" : "false");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}