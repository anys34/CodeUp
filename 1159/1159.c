#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    printf("%s", (n % 6 == 0 || 50 <= n && n <= 70 ? "win" : "lose"));
    return 0;
}