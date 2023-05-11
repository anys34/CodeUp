#include <stdio.h>

int a(int n, int sum) {
    if (n != 0) {
        sum += n--;
        sum = a(n, sum);
    }
    return sum;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", a(n, 0));
    return 0;
}