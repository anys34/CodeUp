#include <stdio.h>

int main(void) {
    int n;
    char a[50][100];
    int b[50][2];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", a[i], &b[i][0]);
        b[i][1] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][0] < b[j][0])
                b[i][1]++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[i][1] == 3) {
            printf("%s", a[i]);
            break;
        }
    }
    return 0;
}