#include <stdio.h>

int main(void) {
    int odd = 0, even = 0, temp;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &temp);
        if (temp % 2 == 0)
            if (even < temp)
                even = temp;
        else
            if (odd < temp)
                odd = temp;
    }
    if(odd != 0)
    printf("%d ", odd);
    if(even != 0)
    printf("%d", even);
    return 0;
}