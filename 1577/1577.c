#include <stdio.h>

int myabs(int a) {
    if (a < 0) return -a;
    return a;
}

int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
    return
}