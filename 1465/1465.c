#include <stdio.h>

int main(void) {
    int n, m, tmp;
    scanf("%d %d", &n, &m);
    for (int i = n; 0 < i; i--) {
        tmp = i * m;
        for (int j = m-1; 0 <= j; j--)
            printf("%d ", tmp-j);
        printf("\n");
    }
    return 0;
}