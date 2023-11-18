#include <stdio.h>

typedef struct {
    char name[10];
    int score;
}STUDENT;

int compare(STUDENT a, STUDENT b) {
    return a.score > b.score;
}

int main(void) {
    STUDENT student[100];
    int n, m;
    STUDENT temp;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s %d", student[i].name, &student[i].score);
        if (i != 0) {
            for (int j = 0; j < m; j++) {
                if (compare(student[i], student[j])) {
                    temp = student[j];
                    student[j] = student[i];
                    student[i] = temp;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        printf("%s\n", student[i].name);
    }
    return 0;
}