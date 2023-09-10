#include <stdio.h>

int main(void) {
	char str[100];
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ',')
			printf(" ");
		else
			printf("%c", str[i]);
		if(str[i + 1] == '\0')
			printf(" ");
	}
	return 0;
}