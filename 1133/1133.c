#include <stdio.h>

int main(void) {
    char a[30];
    scanf("%[^\n]s", a);
    printf("%s", a);
    return 0;
}