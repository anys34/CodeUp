#include <stdio.h>

int main(void) {
	int arr[100],n, u=0, d=0;
	scanf("%d\n",&n);
	scanf("%d",&arr[0]);
	for(int i = 1; i < n; i++) {
		scanf("%d",&arr[i]);
		if(arr[i-1] > arr[i])
			d = 1;
		if(arr[i-1] < arr[i])
			u = 1;
	}
	if(d == u)
		printf("섞임");
	else if(d == 1)
		printf("내림차순");
	else if(u == 1)
		printf("오름차순");
	return 0;
}