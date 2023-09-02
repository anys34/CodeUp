#include <stdio.h>

int main(void) {
  int n, m, tmp;
  scanf("%d %d", &n, &m);
  tmp = n * m + 1;
  for (int i = n; 0 < i; i--) {
    for (int j = m; 0 < j; j--) {
      printf("%d ", --tmp);
    }
    printf("\n");
  }
  return 0;
}