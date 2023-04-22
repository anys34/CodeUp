#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 6; i++)
        for(int j = 1; j <= 6; j++)
            if (i+j == n) 
                printf("%d %d\n", i, j);
    return 0;
}