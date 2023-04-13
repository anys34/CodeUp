#include <stdio.h>

// while

int main(void) {
    int a,b;
    scanf("%d", &b);
    while(1) {
        scanf("%d", &a);
        printf("%d\n", a);
        b--;
        if (b == 0) break;
    }
    return 0;
}