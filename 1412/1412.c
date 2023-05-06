#include <stdio.h>
#include <string.h>

int main(void) {
    char a[90];
    int alphabet[26] = {0};
    scanf("%[^\n]s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (97 <= (int)a[i] && (int)a[i] <= 122) {
            alphabet[(int)a[i]-97]++;
        }
    }
    for (int i = 0; i < 26; i++)
        printf("%c:%d\n", i+97, alphabet[i]);
    return 0;
}