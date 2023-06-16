#include <stdio.h>

int main(void) {
    int a[10][2];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i][0]);
        a[i][1] = 1;
    }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (a[i][0] < a[j][0])
                a[i][1]++;
    for (int i = 0; i < 10; i++)
        if (a[i][1] == 3) {
            printf("%d", a[i][0]);
            break;
        }
    return 0;
}