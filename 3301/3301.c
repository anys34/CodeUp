#include <stdio.h>

int main(void) {
    int n, cnt=0;
    scanf("%d", &n);
    while (50000 <= n) {
        n -= 50000;
        cnt++;
    }
    while (10000 <= n) {
        n -= 10000;
        cnt++;
    }
    while (5000 <= n) {
        n -= 5000;
        cnt++;
    }
    while (1000 <= n) {
        n -= 1000;
        cnt++;
    }
    while (500 <= n) {
        n -= 500;
        cnt++;
    }
    while (100 <= n) {
        n -= 100;
        cnt++;
    }
    while (50 <= n) {
        n -= 50;
        cnt++;
    }
    while (10 <= n) {
        n -= 10;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}