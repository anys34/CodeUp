#include <stdio.h>

// do while

int main(void) {
    int a;
    do {
        scanf("%d", &a);
        if (a== 0) break;
        printf("%d\n", a);
    }
    while (1);
    return 0;
}