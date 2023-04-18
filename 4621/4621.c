#include <stdio.h>

int main(void) {
    int n, k, sum=0, cnt=0;
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
        if (cnt == k) {
            sum = i;
        }
    }
    printf("%d", sum);
    return 0;
}