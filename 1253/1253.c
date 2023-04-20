#include <stdio.h>

int main()
{
	int i, a, b, min, max;

	scanf("%d %d", &a, &b);
	if (a>=b) { 
		max=a; 
		min=b;
	} else {
		max=b;
		min=a;
	}
	i = min;
    while (1) {
        printf("%d ", i);
        if (max == i) break;
        i++;
    }
    
	return 0;
}