#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	for( i = 1 ; n > 0 ; i++) 
		n = n /10;
	
	printf("%d", i - 1);
	return 0;
}