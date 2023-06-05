#include <stdio.h>
#include <string.h>

int main(void) {
    char a[10000] = {};
    scanf("%s", a);
    int sum = 0;
    for (int i = 0;i < strlen(a); i++) {
        sum += a[i];
    }
    printf("%d", sum % 3 == 0 ? 1 : 0);
    return 0;
}