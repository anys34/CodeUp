#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &d);
    c += d;
    if (c >= 60) {
        b += c/60;
        c %= 60;
    }
    if (b >= 60) {
        a += b/60;
        b %= 60;
    }
    while (a > 23)
        a-=24;
    printf("%d %d %d", a, b, c);
    return 0;
}