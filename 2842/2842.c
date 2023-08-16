#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, x2, y1, y2, r1, r2;
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    if(d == fabs(r1 - r2) || d == (r1 + r2)) printf("tangent");
    else if(d > fabs(r1 - r2) && d < (r1 + r2)) printf("overlapped");
    else printf("not overlapped");
    return 0;
}