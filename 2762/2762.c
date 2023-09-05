#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100];
    scanf("%s", a);
    printf("%c", a[0]);
    for (int i = 1; i < strlen(a); i++) {
        if(a[i] == ',') printf("%c", a[i+1]);
    }
    return 0;
}