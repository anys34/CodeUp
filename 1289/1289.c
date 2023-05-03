#include <stdio.h>

int main(void) {
    int w1, w2, w3, h1, h2, h3, n1, n2, n3;
    scanf("%d %d", &w1, &h1);
    scanf("%d %d", &w2, &h2);
    scanf("%d %d", &w3, &h3);
    n1 = w1*h1;
    n2 = w2*h2;
    n3 = w3*h3;
    if(n1 > n2 && n1 > n3)
        printf("%d", n1);
    else if (n2 > n1 && n2 > n3)
        printf("%d", n2);
    else 
        printf("%d", n3);
    return 0;
}