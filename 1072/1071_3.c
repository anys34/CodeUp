#include <stdio.h>

// for

int main(void) {
    int a,b;
    scanf("%d", &b);
    for (;;) {
        scanf("%d", &a);
        printf("%d\n", a);
        b--;
        if (b == 0) break;
    }
    return 0;
}