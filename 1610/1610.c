#include <stdio.h>

void mysubstr(char *str, int start, int count) {
    for (int i = start; i < count+start; i++) {
        printf("%c", str[i]);
    }
}

int main(void) {
    int start, count;
    char str[100];
    scanf("%s", str);
    scanf("%d %d", &start, &count);
    mysubstr(str, start, count);
    return 0;
}