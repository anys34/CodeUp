#include <stdio.h>

int main(void){
    double n;
    scanf("%lf",&n);
    printf("%s", (50.0 <= n && n <= 60 ? "win" : "lose"));
    return 0;
}