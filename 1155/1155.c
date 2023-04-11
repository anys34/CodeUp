#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    printf("%s", ((n % 7 == 0) ? "multiple" : "not multiple"));
    return 0;
}