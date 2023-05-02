#include <stdio.h>

int main(void) {
    int n, m, f;
    int a[10000001], b[100001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &f);
        a[f] = f;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &f);
        if (f == a[f])
            printf("1 ");
        else 
            printf("0 ");
    }
    return 0;
}