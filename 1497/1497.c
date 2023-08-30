#include <stdio.h>

int main(void) {
    int n, tmp1, tmp2, tmp;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &tmp);
        if (i % 2 == 0) {
            tmp2 = tmp;
            if(tmp1 < tmp2) printf("%d ", tmp2);
            else printf("%d ", tmp1);
        } else
            tmp1 = tmp;
    }

    return 0;
}