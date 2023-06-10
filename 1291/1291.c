#include <stdio.h>

int main(void) {
    int b1, b2, b3;
    scanf("%d %d %d", &b1, &b2, &b3);
    for (int i = b3; 0 < b3; i--) {
        if (b1 % i == 0 && b2 % i == 0 && b3 % i == 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}