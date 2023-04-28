#include <stdio.h>

void c(int a, int b) {
    if (a <= b){
        printf("%d\n", a);
        c(a+2, b);
    }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    c((a % 2 == 0 ? a+1 : a), (b % 2 == 0 ? b-1 : b));
    return 0;
}