#include <stdio.h>

int main(void) {
    int a, max = 0, n;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a);
        if (max < a) {
            max = a;
            n = i;
        }
    }
    printf("%d\n%d", max, ++n);
    return 0;
}