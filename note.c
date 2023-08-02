#include <stdio.h>
#include <string.h>

int main() {
    int order;
    char ctmp[100], input[100];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d %99[^\n]", &order, ctmp);
    printf("입력한 정수: %d\n", order);
    printf("입력한 문자열: %s\n", ctmp);

    return 0;
}
