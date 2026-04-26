#include <stdio.h>

int main(void)
{
	int p;
	int k, n;
	int s1, s2, s3;
	
	scanf("%d", &p);
	
	while (p--)
	{
		scanf("%d %d", &k, &n);
		
		s1 = n * (n + 1) >> 1;
		s2 = n * n;
		s3 = n * (n + 1);
		
		printf("%d %d %d %d\n", k, s1, s2, s3);
	}
	
	return 0;
}