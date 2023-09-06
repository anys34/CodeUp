#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%lfx %lf", &a, &b);
    printf("%.2lf", (-b)/a);
    return 0;
}