#include <stdio.h>

int main(void) {
	char name[21];
	int age;
	char code[21];
	double key;
	scanf("%s", name);
	scanf("%d", &age);
	scanf("%s", code);
	scanf("%lg", &key);
	printf("%s\n%d\n%s\n%lg", name, age, code, key);
	return 0;
}