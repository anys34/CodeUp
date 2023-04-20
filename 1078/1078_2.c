#include <stdio.h>

// n 번만에 풀기 (효율적임)

int main() {
    int n, s=0;
    scanf("%d", &n);
    for(int i = 2; i<=n; i+=2)
        s+=i;
    printf("%d", s);
    return 0;
}