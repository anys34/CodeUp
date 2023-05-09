#include <stdio.h>

int main(void) {
    char a;
    int sum, n;
    scanf("%d", &sum);
    while(1) {
        scanf("%c", &a);
        if (a == 61) break;
        scanf("%d", &n);
        if (a == 43)        sum += n;
        else if (a == 45)   sum -= n;
        else if (a == 42)   sum *= n;
        else if (a == 47)   sum /= n;
    }
    printf("%d", sum);
    return 0;
}