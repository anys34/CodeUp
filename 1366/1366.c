#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {

        for (int j = 1; j <= num; j++) {

            if ((i == 1) || (j == 1) || (i == num) || (j == num) || (i == j) || (i + j == num + 1) || (i == num / 2 + 1) || (j == num / 2 + 1)) {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
