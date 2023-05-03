#include <stdio.h>

int main(void) {
    int c,h;
    scanf("C%dH%d", &c, &h);
    printf("%d", (c*12)+h);
    return 0;
}