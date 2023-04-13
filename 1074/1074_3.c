#include <stdio.h>

// for

int main(void) {
    int a;
    scanf("%d", &a);
    for (;;) {
        printf("%d\n", a);
        a--;
        if (a == 0) break;
    }
    while (1);
    return 0;
}