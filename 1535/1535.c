#include <stdio.h>

int n, d[110];

int f() {
    int result = 0;
    for (int i = 1; i < n; i++) {
        if (d[result] < d[i])
            result = i;
    }
    return ++result;
}

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}