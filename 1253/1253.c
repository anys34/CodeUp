#include <stdio.h>

int main()
{
	int i, a, b, max;
	scanf("%d %d", &a, &b);
	if (a>=b) { 
		max=a; 
		i=b;
	} else {
		max=b;
		i=a;
	}

    while (1) {
        printf("%d ", i);
        if (max == i++) break;
    }
    
	return 0;
}