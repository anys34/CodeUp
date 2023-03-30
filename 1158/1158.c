#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    printf("%s", (30 <= n && n <= 40 || 60 <= n && n <= 70 ? "win" : "lose"));
    return 0;
}