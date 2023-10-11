#include <stdio.h>

int a[101][101] = {1,0}, i, j, n, m;
int y, x, ny, nx, cnt=1;
int dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0};

void print_matrix() {
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}

int safe(int a, int b) {
    if((a>=0 && a<n) && (b>=0 && b<m)) return 1;
    else return 0;
}

int main(void) {
    scanf("%d %d", &n, &m);
    int s = n*m;
    while(s>cnt) {
        ny = y+dy[i%4], nx=x+dx[i%4];
        if(safe(ny, nx) && a[ny][nx] == 0) {
            a[ny][nx] = ++cnt;
            y=ny, x=nx;
        }
        else i++;
    }
    print_matrix();
    return 0;
}