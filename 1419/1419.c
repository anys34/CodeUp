#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100];
    int cnt=0;
    scanf("%[^\n]s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == 'l' && a[i+1] == 'o' && a[i+2] == 'v' && a[i+3] == 'e')
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}