#include <stdio.h>

int main(void) {
    int arr[101][101] = {};
    int num, x = 1;
    scanf("%d", &num);
    for(int i = 1; i <=num; i++)
        for(int j = num; j >=1; j--){
            arr[j][i] = x;
            x++;
        }
    for(int i = 1; i <=num; i++) {
        for(int j = 1; j <= num; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}