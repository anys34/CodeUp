#include <stdio.h>

int main(void) {
    double x1, x2, y1, y2, r1, r2;
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    int r = r1 + r2, a = x1 - x2, b = y1 - y2;
    if ((a*a)+(b*b) <= r*r) printf("overlapped");
    else printf("not overlapped");
    return 0;
}