# include <stdio.h>

int main(void) {
	int n,r,m,i;
	int n_sum=1,r_sum=1,m_sum=1;
	scanf("%d %d",&n,&r);
	m = n-r;
	for(i = n; i>=1; i--)
		n_sum = n_sum *i;
	for(i = r; i>=1; i--)
		r_sum = r_sum * i;
	for(i = m; i>=1; i--)
		m_sum = m_sum * i;
	printf("%d",n_sum/(r_sum*m_sum));
	return 0;
}