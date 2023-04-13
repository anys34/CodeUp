#include <stdio.h>

// do while

int main(void) {
    int a,b;
    scanf("%d", &b);
    do {
        scanf("%d", &a);
        printf("%d\n", a);
        b--;
        if (b == 0) break;
    }
    while(1);
    return 0;
}