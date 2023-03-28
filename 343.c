#include <stdio.h>

int main(void){
    int a,b,y,m,d;
    char gen;
    scanf("%02d%02d%02d-%01d",&y,&m,&d,&a);
    if (a == 1){
        gen = 'F';
        y += 1900;
    }
    else if (a == 2){
        gen = 'M';
        y += 1900;
    }
    else if (a == 3){
        gen = 'F';
        y += 2000;
    }
    else if (a == 4){
        gen = 'M';
        y += 2000;
    }
    printf("%d/%02d/%02d %c", y, m, d, gen);
    return 0;
}