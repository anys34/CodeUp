#include <stdio.h>

int n;

int zero(int n) {
    return n ? 0 : 1;
}

int plus(int n)  {
    return n > 0 ? 1 : 0;
}

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("%s", plus(n)?"plus":"minus");
  return 0;
}