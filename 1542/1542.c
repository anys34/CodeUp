#include <stdio.h>

int n;

void f() {
    int num = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            num++;
    printf("%s", num == 2 ? "prime":"composite");
}

int main(void) {
  scanf("%d", &n);
  f(n);
  return 0;
}