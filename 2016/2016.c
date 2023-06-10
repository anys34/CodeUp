#include <stdio.h>

int main(void) {
    int len;
    scanf("%d", &len);
    char n[len];
    scanf("%s", n);
    for (int i = 1; i <= len; i++) {
        printf("%c", n[i-1]);
        if ((len-i) % 3 == 0 && len != i) {
            printf(",");
        }
    }
    return 0;
}