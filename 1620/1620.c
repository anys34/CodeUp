#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    while (1) {
        sum += n % 10;
        if (n < 1) {
            if (sum < 10) break;
            n = sum;
            sum = 0;
            continue;
        }
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}