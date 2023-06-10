#include <stdio.h>

int main(void) {
    int max[2], min[2], n, temp;
    max[0] = 0;
    min[0] = 32767;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp > max[0]) {
            max[0] = temp;
            max[1] = i+1;
        }
        if (temp < min[0]) {
            min[0] = temp;
            min[1] = i+1;
        }
    }
    printf("%d : %d\n", max[1], max[0]);
    printf("%d : %d", min[1], min[0]);
    return 0;
}