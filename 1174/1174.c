#include <stdio.h>

int main(void) {
    int h, m;
    scanf("%d %d", &h, &m);
    m += ++h * 60 - 30;
    h = m / 60;
    m -= (h * 60); 
    h = (h + 23) % 24;
    printf("%d %d", h, m);
    return 0;
}