#include <stdio.h>

int n;

long long int d[110];

long long int f() {
    long long int min = 2147483647;
    for (int i = 1; i <= n; i++) {
        if (min > d[i])
            min = d[i];
    }
    return min;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}