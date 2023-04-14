#include <stdio.h>

// while

int main(void){
    int a;
    scanf("%d",&a);
    while (1){
        a--;
        printf("%d \n",a);
        if (a == 0) break;
    }
    return 0;
}