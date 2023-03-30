#include <stdio.h>

// 이중 3항 연산자

int main(void){
    int n;
    scanf("%d",&n);
    printf("%s", (n % 6 == 0 || (50 <= n && n <= 70 ? 1 : 0) ? "win" : "lose"));
    return 0;
}