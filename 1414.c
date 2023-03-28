#include <stdio.h>

int main(void){
    char a[100];
    int num = 0,num2 = 0;
    scanf("%s", a);
    for(int i = 0; a[i] != '\0'; i++){
        if (a[i] == 67 || a[i] == 99){
            num++;
            if (a[i+1] == 67 || a[i+1] == 99)
                num2++;
        }
    }
    printf("%d\n%d",num,num2);

    return 0;
}