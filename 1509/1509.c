#include <stdio.h>

int main(void) {
    int a[11][10];
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 10 ; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 10; i++) {
        if (a[10][i] == 1){
            for (int j = 9; 0 <= j; j--) {
                if (a[j][i] != 0) {
                    a[0][i] = 1;
                    printf("%d %s\n", i+1, a[j][i] > 0 ? "crash" : "fall");
                    break;
                }
            }
            if (a[0][i] == 0)
                printf("%d safe\n", i+1);
        }
    }
    return 0;
}