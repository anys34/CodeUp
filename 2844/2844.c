#include <stdio.h>
#include <string.h>

int findBook(char loan[1000][100], char ctmp[100]) {
    for (int tmp = 0; tmp < 1000; tmp++)
        if (!strcmp(loan[tmp], ctmp))
            return tmp;
    return -1;
}

int endNum(char loan[1000][100]) {
    for (int tmp = 0; tmp < 1000; tmp++)
        if (loan[tmp][0] == 0)
            return tmp;
    return -1;
}

int main(void) {
    int n, order, m, cnt[1000] = {};
    char ctmp[100], input[100], loan[1000][100] = {0};
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d %[^\n]", &order, ctmp);
        if (order == 0)
            for (int i = 0; i < endNum(loan); i++)
                printf("%s %d\n", loan[i], cnt[i]);
        else if (order == 1) {
            m = findBook(loan, ctmp);
            if (m == -1) {
                m = endNum(loan);
                strcpy(loan[m], ctmp);
                cnt[m] = 1;
            } else cnt[m]++;
        }
        else if (order == 2) {
            m = findBook(loan, ctmp);
            if (m == -1) printf("no book!\n");
            else {
                cnt[m]--;
                if(cnt[m] == 0)
                    for (int j = m; j < 1000; j++) {
                        if(loan[j+1][0] != 0 || j == m) {
                            strcpy(loan[j], loan[j+1]);
                            loan[j+1][0] = 0;
                            cnt[j] = cnt[j+1];
                        }
                        else break;
                    }
            }
        } else printf("wrong command!\n");
    }
    return 0;
}