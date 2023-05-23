#include <stdio.h>

char f() {
    return 'A';
}

int main(void) {
    printf("%c", f());
    return 0;
}