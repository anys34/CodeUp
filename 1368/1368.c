#include <stdio.h>

int main(void) {
    int h, k;
    char d;
    scanf("%d %d %c", &h, &k, &d);
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h + k - 1; j++) {
            if (d == 'R') {
                if ((i + j > h) && (i + j < h + k + 1))
                    printf("*");
                else
                    printf(" ");
            }
            else {
                int m = 2 * (i - 1) + 1;
                if (i + j > m && i + j < k + m + 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}