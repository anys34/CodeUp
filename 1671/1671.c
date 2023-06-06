# include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	if(a == b)
		printf("tie");
	else if((a == 1 && b == 0) || (a == 0 && b == 2) || (a == 2 && b == 1))
		printf("lose");
	else
		printf("win");
	return 0;
}