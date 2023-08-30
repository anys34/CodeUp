#include <stdio.h>

double ABS(double a) {
    if (a >= 0) return a;
    return -a;
}

int main(void) {
    double a;
    scanf("%lf", &a);
    printf("%.10g", ABS(a));
    return 0;
}