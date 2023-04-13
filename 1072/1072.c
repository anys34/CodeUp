#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d", &b);
    while(1) {
        scanf("%d", &a);
        printf("%d\n", a);
        if (a == b) break;
    }
    return 0;
}