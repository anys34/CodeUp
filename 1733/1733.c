#include <stdio.h>
#include <string.h>

int main(void) {
    char a[1000];
    scanf("%[^\n]s", a);
    if (strcmp("IOI", a) == 0)
        printf("IOI is the International Olympiad in Informatics.");
    else
        printf("I don't care.");
    return 0;
}