#include <stdio.h>

void a(int n, int i) {
    printf("%d\n", i);
    if (i != 1) {
        i--;
        a(n, i);
    }
        
}

int main(void) {
    int n;
    scanf("%d", &n);
    a(n, n);
    return 0;
}