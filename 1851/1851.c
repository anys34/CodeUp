#include <stdio.h>

int n;

void f(int k){
  if(k<=0) return;
  f(k-1);
  printf("*");
}
int main(void){
  scanf("%d", &n);
  f(n);
  return 0;
}