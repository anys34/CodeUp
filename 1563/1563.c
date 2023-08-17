#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(int n, int m, int x) {
    if ((n >= m && n <= x) || (n >= m && n <= m)) return n;
    if ((m >= n && m <= x) || (m >= x && m <= n)) return m;
    return x;
}

int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}