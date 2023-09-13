#include <stdio.h>

int save[201] = { 0, 1, 1, };

int f(int n) {
   if (save[n]) return save[n];
   return save[n] = (f(n - 2) + f(n - 1)) % 10009;
}

int main() {
   int n;
   scanf("%d", &n);
   printf("%d", f(n));
}