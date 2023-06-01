#include <stdio.h>

int main(void){
    int w,h,n,l,d,x,y;
    
    int a[100][100] = {};
    
    scanf("%d %d", &w, &h);
    
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        a[x][y] = 1;
        for(int j = 1; j < l; j++){
            a[x+j][y] = (d==1?1:0);
            a[x][y+j] = (d==0?1:0);
        }
    }
    for(int i = 1; i <= w; i++){
        for(int j =1; j <= h; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}