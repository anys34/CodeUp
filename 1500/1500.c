#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    int n[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", n[i][j]);
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}