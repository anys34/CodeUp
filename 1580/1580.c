#include <stdio.h>

float circle(int r) {
    return r*r*3.14;
}

int main(void) {
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
    return 0;
}