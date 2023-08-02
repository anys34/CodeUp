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
    int n, order, m;
    char ctmp[100], input[100];
    char loan[1000][100] = {0};
    int cnt[1000] = {};
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d %99[^\n]", &order, ctmp);
        switch (order) {
            case 0:
                m = endNum(loan);
                for (int i = 0; i < m; i++) {
                    printf("%s %d\n", loan[i], cnt[i]);
                }
                break;
            case 1:
                m = findBook(loan, ctmp);
                if (m == -1) {
                    m = endNum(loan);
                    strcpy(loan[m], ctmp);
                    cnt[m] = 1;
                } else {
                    cnt[m]++;
                }
                break;
            case 2:
                m = findBook(loan, ctmp);
                if (m == -1) {
                    printf("no book!\n");
                } else {
                    cnt[m]--;
                    if (cnt[m] == 0) {
                        if(loan[m+1][0] == 0) {
                            strcpy(loan[m], loan[m+1]);
                            loan[m+1][0] = 0;
                            cnt[m] = cnt[m+1];
                        }
                        else {
                            for (int j = m; j < 1000; j++) {
                                if(loan[j+1][0] != 0) {
                                    strcpy(loan[j], loan[j+1]);
                                    loan[j+1][0] = 0;
                                    cnt[j] = cnt[j+1];
                                }
                                else break;
                            }
                        }
                    }
                }
                break;
            default:
                printf("wrong command!\n");
                break;
        }
    }
    return 0;
}