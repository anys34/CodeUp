#include <stdio.h>

void a(int n, int i) {
    printf("%d\n", i);
    if(n != i) {
        i++;
        a(n, i);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    a(n, 1);
    return 0;
}