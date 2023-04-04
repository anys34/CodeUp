#include <stdio.h>

// 모두 삼항 연산자로

int main(void){
    int a,b,y,m,d;
    char gen;
    scanf("%02d%02d%02d-%d",&y,&m,&d,&a);
    y += ((a==1 || a==2) ? 2000 : 1900);
    gen = ((a==1 || a==3) ? 'F' : 'M');
    printf("%d/%02d/%02d %c", y, m, d, gen);
    return 0;
}