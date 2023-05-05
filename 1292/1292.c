#include <stdio.h>

int main(void) {
    long n, sum=0;
    scanf("%ld", &n);
    for (int i = 0; i < 10; i++) {
        sum += n%10;
        n /= 10;
    }
    printf("%ld\n", (sum % 7 == 4 ? suspect : citizen));
    return 0;
}