#include <stdio.h>

int main(void){
    char a[100];
    int i = 0;
    scanf("%[^\n]s", a);
    while(a[i] != '\0'){
        if (a[i] != ' ')
            printf("%c", a[i]);
        i++;
    }
    return 0;
}