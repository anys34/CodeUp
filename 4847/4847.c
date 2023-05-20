#include <stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);
    int a, b, s, rotate, rate=1;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &s);
        rate = b*rate/a;
        rotate += s;
    }
    printf("%d %d", rotate%2, rate);
    return 0;
}