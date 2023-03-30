#include <stdio.h>

int main(void){
	int a;
	scanf("%d", &a);
	if(a < 10)
		printf("small");
	else
		printf("big");
    return 0;
}