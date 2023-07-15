#include <stdio.h>

int n;

void f(int n) {
    if (n == 0) printf("zero");
    else if (n < 0) printf("negative");
    else printf("positive");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}