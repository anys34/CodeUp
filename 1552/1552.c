#include <stdio.h>

double x;
 
double f(double t) {
  return x-(long long int)t;
}

int main(void) {
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
  return 0;
}