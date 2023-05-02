#include <stdio.h>

int main(void) {
    int n, cnt=0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d: ", i+1);
        for (int j = 0; j < n; j++) {
            if (i != j){
                if (a[i] == a[j])
                printf("= ");
            else if (a[i] > a[j])
                printf("> ");
            else 
                printf("< ");
            }
        }
        printf("\n");
    }
    return 0;
}