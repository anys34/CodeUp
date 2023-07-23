#include <stdio.h>

int main(void) {
    int grade, class, number;
    scanf("%d %d %d", &grade, &class, &number);
    if (class % 2 == 0) {
        printf("%d%d%d ", grade, class, number);
        printf("%d%d%d", grade, class, number);
    }
    else {
        printf("%d%d%d", grade, class, number);
    }
    return 0;
}