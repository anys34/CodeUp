#include <stdio.h>

int main(void){
    char a[20];
    scanf("%s", a);
    for(int i = 0; a[i] != '\0'; i++){
        printf("%c", a[i]+2);
    }
    printf("\n");
    for(int i = 0; a[i] != '\0'; i++){
        printf("%c", (a[i]*7) % 80 + 48);
    }
    return 0;
}