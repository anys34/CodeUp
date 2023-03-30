#include <stdio.h>

int main(void){
    int t, s;
    scanf("%d %d", &t, &s);
    printf("%d", (t == 90 ? s : (89 - t) / 5 + s));
    return 0;
}