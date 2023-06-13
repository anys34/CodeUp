#include <stdio.h>

int f(int n) {
    if (n < 1)
        return 0;
    f(n/2);
    printf("%d", n%2);
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("0");
    else 
        f(n);
    return 0;
}