#include <stdio.h>

int main(void) {
    int t,m,c,s;
    scanf("%d %d %d", &t, &m, &c);
    if (m + c >= 60) {
        s = (m + c) / 60;
        t += s;
        if (t > 23)
            t -= 24;
        m += c - s * 60; 
    }
    printf("%d %d", t, m);
    return 0;
}