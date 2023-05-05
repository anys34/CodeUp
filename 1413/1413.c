#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100];
    scanf("%[^\n]s", a);
    for (int i = strlen(a)-1; 0 <= i; i--) {
        printf("%c", a[i]);
    }
    return 0;
}