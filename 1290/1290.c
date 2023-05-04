#include <stdio.h>

int main(void) {
	int n, i, num = 0;
	scanf("%d", &n);
	for(i = 1; i<n; i++) {
		if(n%i == 0)
			num++;
	}
	printf("%d", num);
	return 0;
}