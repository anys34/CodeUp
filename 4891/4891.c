#include <stdio.h>

int main(void){
    int max=-1,min=1001,s,n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &s);
        if (max < s)
            max = s;
        if (min > s)
            min = s;
    }
    printf("%d", max-min);
    return 0;
}