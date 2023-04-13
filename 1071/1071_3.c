#include <stdio.h>

// for

int main(void) {
    int a;
    for (;;) {
        scanf("%d", &a);
        if (a== 0) break;
        printf("%d\n", a);
    }
    return 0;
}