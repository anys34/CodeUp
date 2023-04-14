#include <stdio.h>

// do while

int main(void){
    int a;
    scanf("%d",&a);
    do {
        a--;
        printf("%d \n",a);
        if (a == 0) break;
    }
    while (1);
    return 0;
}