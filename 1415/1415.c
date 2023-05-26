#include <stdio.h>

int main(void) {
    int temp, odd = 0, even = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &temp);
        if (temp % 2 == 0 && temp > even) {
            even = temp;
        }
        else if (temp % 2 == 1 && odd < temp) {
            odd = temp;
        }
    }
    if (odd)
        printf("%d ", odd);
    if (even) 
        printf("%d", even);
    return 0;
}