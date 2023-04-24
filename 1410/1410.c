#include <stdio.h>
#include <string.h>

int main(void) {
    int n1=0, n2=0;
    char a[100000];
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == '(') {
            n1++;
        }
        else {
            n2++;
        }
    }
    printf("%d %d", n1, n2);
    return 0;
}