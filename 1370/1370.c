#include <stdio.h>

int main(void) {
    int h, r;
    scanf("%d %d", &h, &r);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < h; j++) {
            for (int k = 0; k < j; k++)
                printf(" ");
            printf("*\n");
        }
       for (int j = h-2; j >= 0; j--) {
            for (int k = 0; k < j; k++)
                printf(" ");
            printf("*\n");
       }
    }
    return 0;
}