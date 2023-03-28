#include <stdio.h>
#include <string.h>

int main(void){
    char a[100];
    scanf("%s", a);
    if (strcmp(a, "love") == 0)
        printf("I love you.");
    return 0;
}