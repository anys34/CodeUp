#include <stdio.h>

int main(void) {
    int n, m, temp;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        temp = n*m-i;
        for (int j = 0; j < m; j++) {
            printf("%d ", temp);
            temp -= n;
        }
        printf("\n");
    }
    return 0;
}