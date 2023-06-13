#include <stdio.h>

int save[201] = { 0, };

int func(int n) {
   if (n == 1 || n == 2) {
      save[n] = 1;
      return 1;
   }
   if (save[n] != 0) return save[n];
   return save[n] = (func(n - 2) + func(n - 1)) % 10009;
}

int main() {
   int n;
   scanf("%d", &n);
   printf("%d", func(n));
}