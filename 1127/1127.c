#include <stdio.h>

int main(void) {
    float f1, f2, f3;
    int n1, n2, n3;
    scanf("%f %d", &f1, &n1);
    scanf("%f %d", &f2, &n2);
    scanf("%f %d", &f3, &n3);
    printf("%.1f", (f1*n1)+(f2*n2)+(f3*n3));
    return 0;
}