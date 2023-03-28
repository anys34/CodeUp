#include <stdio.h>

int main(void){
    int a,b,y,m,d;
    char gen;
    scanf("%02d%02d%02d-%d",&y,&m,&d,&a);
    if (a == 1 || a == 2){
        gen = ((a==1) ? 'F' : 'M');
        y += 1900;
    }
    else if (a == 3 || a == 4){
        gen = gen = ((a==3) ? 'F' : 'M');;
        y += 2000;
    }
    printf("%d/%02d/%02d %c", y, m, d, gen);
    return 0;
}