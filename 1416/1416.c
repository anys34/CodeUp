#include <stdio.h>

int main(void) {
    int n, i=0;
    char a[1000];
    scanf("%d", &n);
    if (n == 0) printf("0");
    while (n > 0) {
        a[i] = n%2;
        n /= 2;
        i++;
    }
    for(int j = i; 0 < j; j--) {
        printf("%d", a[j-1]);
    }
    return 0; 
}